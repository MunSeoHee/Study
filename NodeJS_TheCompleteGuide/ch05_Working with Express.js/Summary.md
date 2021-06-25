### ch05

#### express

##### express 설치
```
npm install --save express
```

##### express 사용해보기

```js
const http = require('http');
const express = require('express')

const app = express();

app.use((req, res, next)=>{
    console.log('middleware');
    next();
})

app.use((req, res, next)=>{
    console.log('another middleware');
})

const server = http.createServer(app);

server.listen(3000);
```
> 미들웨어를 생성해서 express 앱을 사용

> 미들웨어 함수는 요청 오브젝트(req), 응답 오브젝트(res), 다음 미들웨어 함수에 대한 액세스 권한을 갖는 함수(next)로 구성

> ```app.user((req, res, next)=>{})```와 같이 작성하여 미들웨어를 생성

> ```next()```를 사용하여 다음 미들웨어를 실행, 이때 기본적으로 위에서 아래의 순으로 실행이 됨
>> 위 예제의 경우 middleware -> another middleware이 콘솔에 출력되게 된다


##### 응답 보내기

```js
app.use((req, res, next)=>{
    res.send('<h1>hello</h1>');
})
```
> ```res.send()```를 이용하여 간단하게 응답을 보낼 수 있음

> .send()는 .setHeaders()를 하지 않아도 headers에 contents-type을 자동으로 설정해준다


##### 라우팅하기
```js
app.use('/',(req, res, next)=>{
    res.send('<h1>hello</h1>');
})
```
> ```app.use('path', function)```과 같이 사용하여 미들웨어에 특정 path를 설정해줄 수 있다

> 단, 다음과 같이 코드를 짤 경우 '/'로 시작하는 모든 요청에 해당 미들웨어가 실행 됨

```js
app.use('/add-product',(req, res, next)=>{
    res.send('<h1>add product</h1>');
})

app.use('/',(req, res, next)=>{
    res.send('<h1>hello</h1>');
})
```
> 미들웨어는 위에서 아래의 순서대로 실행이 되기 때문에 '/' 요청 미들웨어 위에 다른 path의 미들웨어를 두어서 처리


#### input 데이터 가져오기

##### form 페이지 만들기
```js
app.use('/add-product',(req, res, next)=>{
    res.send('<form action="/product" method="POST"><input type="text" name="title"><button type="submit">add</button></form>');
})
```

##### body-parser 설치
```
npm install --save body-parser
```

##### body-parser 사용하기
```js
const bodyParser = require('body-parser');

app.use(bodyParser.urlencoded({extended: false}));

app.use('/product', (req, res)=>{
    console.log(req.body);
    res.redirect('/');
})
```
> body-parser을 이용하여 ```req.body```를 이용해 input 데이터를 json 형식으로 간편하게 가지고 올 수 있음

> ```res.redirect('path')``` 를 통해 페이지를 이동


#### method에 따라 routing 하는 법

##### post 요청만 받는 미들웨어 생성
```js
app.post('/product', (req, res)=>{
    console.log(req.body);
    res.redirect('/');
})
```
> ```app.post('path', function) ```는 post로 들어오는 해당 path에만 실행이 됨

> app.get() 등도 존재, 이를 사용하면 정확이 일치하는 경로에만 동작 

#### Route 파일 분리

##### routes/admin.js
```js
const express = require('express');

const router = express.Router();

router.use('/add-product',(req, res, next)=>{
    res.send('<form action="/product" method="POST"><input type="text" name="title"><button type="submit">add</button></form>');
})

router.post('/product', (req, res)=>{
    console.log(req.body);
    res.redirect('/');
})

module.exports = router;
```

##### app.js
```js
const http = require('http');
const express = require('express')
const bodyParser = require('body-parser');
const adminRoutes = require('./routes/admin');

const app = express();

app.use(bodyParser.urlencoded({extended: false}));

app.use(adminRoutes);

app.use('/',(req, res, next)=>{
    res.send('<h1>hello</h1>');
})

const server = http.createServer(app);

server.listen(3000);

```
> ```app.use(adminRoutes);```를 통해 routes/admin.js을 불러와서 이곳에 정의되어있는 경로들이 사용 될 수 있음

#### 404 page

##### 예외 처리가 될 미들웨어 생성
```js
...
app.use(...);
app.use(...);
...

app.use((req, res, next)=>{
    res.status(404).send('<h1>Page not found</h1>');
})
```
> 가장 밑에 app.use를 사용하여 어떠한 path에도 매칭이 되지 않았을 경우 실행이 되도록 처리

> ```.status(404)```를 이용하여 http 상태 코드를 404로 세팅


#### Filtering Paths

##### router에 path 설정하기
```js
app.use('/admin',adminRoutes);
```
> /admin 경로로 오는 요청을 adminRoutes에서 처리

##### routes/admin.js
```js
router.get('/add-product',(req, res, next)=>{
    res.send('<form action="/admin/add-product" method="POST"><input type="text" name="title"><button type="submit">add</button></form>');
})

router.post('/add-product', (req, res)=>{
    console.log(req.body);
    res.redirect('/');
})
```
> [GET] /admin/add-product 요청은 첫번째 미들웨어가 실행

> [POST] /admin/add-product 요청은 두번째 미들웨어가 실행


d