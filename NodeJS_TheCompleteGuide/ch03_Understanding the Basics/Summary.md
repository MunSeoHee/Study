## ch03

#### nodejs의 http, https 모듈
http : 서버 런칭, 요청 보내기
https : ssl 서버 런칭


#### nodejs 서버 만들기
```js
const http = require('http');
```
http 전역 모듈 불러오기

```js
const server = http.createServer((req, res)=>{
    console.log(res);
});
```
서버가 실행되었을 때, 호출되는 function 생성

```js
server.listen(3000);
```
3000번 포트로 서버 오픈

```
node app.js
```
node 파일명.js 명령어를 통해 서버 실행 시키기

이 후, localhost:3000 으로 접속하면 콘솔로 req의 내용을 확인 할 수 있음

-----

#### createServer((req, res)=>{}) 의 req 정보 살펴보기

```js
const server = http.createServer((req, res)=>{
    console.log(req.url, req.method, req.headers);
});
```
.url : url 정보 (/ 또는 /home 등)

.method : GET, POST 등의 메소드 정보

.headers : header의 정보들 (host, connection, accept, cookies 등)


----

#### 응답 전송하기

```js
const http = require('http');

const server = http.createServer((req, res)=>{
    res.setHeader('Content-Type', 'text/html');
    res.write('<html>');
    res.write('<head><title>title</title>');
    res.write('<body><h1>hello</h1></body>');
    res.write('</html>');
    res.end();
});

server.listen(3000);
```
res.setHeader('Content-Type', 'text/html') : headers 정보의 Content-Type를 text/html로

res.write() : 응답을 작성을 함

res.end() : 응답 작성을 종료하고 전송, 이 이후에 res.write를 하면 안 됨


-----

#### Routing Request

##### 01. '/' url routing
```js
const http = require('http');

const server = http.createServer((req, res)=>{
    const url = req.url;
    if(url === '/'){
        res.write('<html>');
        res.write('<head><title>Enter msg</title>');
        res.write('<body><form action="/message" method="POST"><input type="text" name="message"><button type="submit">send</button></form></body>');
        res.write('</html>');
        return res.end();
    }
    res.setHeader('Content-Type', 'text/html');
});

server.listen(3000);
```
> url이 '/'일 경우 if문 안의 내용이 실행

> ```return res.end()```을 통해서 res.end()를 실행한 뒤 함수를 종료하여 if문 밖에 있는 내용이 실행되지 않도록 처리

##### 02. '/message' url routing

```js
const http = require('http');
const fs = require('fs');

const server = http.createServer((req, res)=>{
    const url = req.url;
    const method = req.method;
    if(url === '/'){
        res.write('<html>');
        res.write('<head><title>Enter msg</title>');
        res.write('<body><form action="/message" method="POST"><input type="text" name="message"><button type="submit">send</button></form></body>');
        res.write('</html>');
        return res.end();
    }

    if(url==='/message' && method==='POST'){
        fs.writeFileSync('message.txt', 'DUMMY');
        res.statusCode = 302;
        res.setHeader('Location', '/');
        return res.end();
    }
    res.setHeader('Content-Type', 'text/html');
});

server.listen(3000);
```
> const fs = require('fs') : 파일 시스템을 이용하기 위해 fs 모듈 불러오기

> if(url==='/message' && method==='POST'){} : url이 '/message'이고 POST method일 때에만 처리

> fs.writeFileSync('message.txt', 'DUMMY') : 'DUMMY'라는 내용이 담긴 텍스트 파일 생성

> res.statusCode = 302 : 상태 코드를 302로 세팅

> res.setHeader('Location', '/') : 위치를 '/'로 이동

##### 03. input의 내용 가져와서 txt로 저장하기
```js
const http = require('http');
const fs = require('fs');

const server = http.createServer((req, res)=>{
    
    ...

    if(url==='/message' && method==='POST'){
        const body=[];
        req.on('data', (chunk)=>{
            console.log(chunk);
            body.push(chunk);
        });
        req.on('end', ()=>{
            const parseBody = Buffer.concat(body).toString();
            const message = parseBody.split('=')[1];
            fs.writeFileSync('message.txt', message);
        })
        res.statusCode = 302;
        res.setHeader('Location', '/');
        return res.end();
    }
    res.setHeader('Content-Type', 'text/html');
});

server.listen(3000);
```
> 스트림의 'data'와 'end'에 이벤트 리스너를 등록해서 데이터를 받을 수 있음

> 'data'이벤트에서 발생시킨 청크는 buffer. 이 청크가 문자열 데이터라는 것을 알고 있다면, 이 데이터를 배열에 수집한 다음 'end'이벤트에서 이어 붙여서 문자열로 만드는 것이 가장 좋음

> parseBody 는 'message=inputboxcontent' 이기 때문에 split('=')를 이용하여 =를 기준으로 분리한다. 그 후 [1]을 불러왔기 때문에 'inputboxcontent'만 가져올 수 있다


##### 04. 비동기식 파일 쓰기로 처리
```js
req.on('end', ()=>{
    ...
    fs.writeFile('message.txt', message, err=>{
        res.statusCode = 302;
        res.setHeader('Location', '/');
        return res.end();
    });
});
```

##### 05. route를 통해 파일 분리하기

routes.js
```js
const fs = require('fs');
const { request } = require('http');

const requestHandler = (req, res) => {
    const url = req.url;
    const method = req.method;
    if(url === '/'){
        res.write('<html>');
        res.write('<head><title>Enter msg</title>');
        res.write('<body><form action="/message" method="POST"><input type="text" name="message"><button type="submit">send</button></form></body>');
        res.write('</html>');
        return res.end();
    }
    
    if(url==='/message' && method==='POST'){
        const body=[];
        req.on('data', (chunk)=>{
            console.log(chunk);
            body.push(chunk);
        });
        req.on('end', ()=>{
            const parseBody = Buffer.concat(body).toString();
            const message = parseBody.split('=')[1];
            fs.writeFile('message.txt', message, err=>{
                res.statusCode = 302;
                res.setHeader('Location', '/');
                return res.end();
            });
        });
        
    }
    res.setHeader('Content-Type', 'text/html');
}

module.exports = requestHandler;
```
> module.exports = requestHandler : 이를 통해서 함수를 외부에서 사용 할 수 있게 해줌

> const requestHandler = (req, res) => {...} : requestHandler라는 함수를 통해 처리가 될 수 있도록 기능을 작성


app.js
```js
const http = require('http');
const routes = require('./routes')

const server = http.createServer(routes);

server.listen(3000);
```
> const routes = require('./routes') : 위에서 만들어 놓은 routes.js를 가져오기
> const server = http.createServer(routes) : 다음과 같이 routes.js의 내용으로 createServer가 실행되도록 함


```js

module.exports = requestHandler;


module.exports = {
    handler : requestHandler,
    someText : "some hard coded text"
};


exports.handler = requestHandler;
exports.someText = "some hard coded text";

```
> exports를 사용하는 여러가지 방법