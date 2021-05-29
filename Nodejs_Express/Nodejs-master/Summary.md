## Express 

### Express 시작하기
#### 앱 시작하기
```js
const express = require('express')
const app = express()

//Route
 app.get('/', (req, res) => res.send('Hello World!'))
 app.post('/', (req, res) => res.send('Hello World!'))

//  app.get('/', function(req, res){
//      return res.send('Hello World!')
//  });
//위와 동일한 코드

app.listen(3000, () => console.log('Example app listening on port 3000!'))
```
> app.get(path, callback) : get방식의 URL Path 경로에 따라 적당한 응답(함수)을 실행

> app.post(path, callback) : post방식의 URL Path 경로에 따라 적당한 응답(함수)을 실행

> app.listen(port, callback) : 지정한 port로 서버를 열고 함수를 실행


#### Route URL Path Parameter
```js
app.get('/page/:pageId', function(request, response) { 
  response.send(request.params.pageId);
});
```
> /page/:pageId : page/Value 의 형식으로 URL이 들어왔을때, Value를 pageId라는 값으로 받아들여 동작

> request.params.pageId = pageId의 값


#### Redirect
```js
response.redirect('/');
```
> '/'라는 주소로 변경


#### Middleware
express에서 제작하지 않은, 남들 혹은 자신이 만든 기능들

##### ex_bodyParser 사용해보기
```
//bodyparser 다운로드
npm install bodyParser
```


```js
//import
var bodyParser = require('body-parser');

//bodyparser app에 등록하여 사용
app.use(bodyParser.urlencoded({ extended: false }));
 
 //bodyparser 사용법
app.post('/...', function(request, response){
  var post = request.body;
  //post로 넘어오는 데이터 중 title의 값
  var title = post.title;
  //post로 넘어오는 데이터 중 description의 값
  var description = post.description;
});
```
> request.body : post로 전송되는 값들을 가져올 수 있음


##### ex_compression 사용해보기 

```
npm install compression
```
```js 
var compression = require('compression')
app.use(compression());
```
> 전송되는 데이터를 압축하여 네트워크의 부하를 줄임

##### Middleware 만들기
```js
app.use(function(request, response, next){
    ...code...
    next();
  });
});
```
> 모든 상황에 적용
```js
app.get('*', function(request, response, next){
    ...code...
    next();
  });
});
```
> get으로 오는 모든 요청에 대해서만 적용


#### Error 처리

```js 
app.get('~', function(request, response){
    if(err){
        //에러가 있으면 err(에러)를 인자로 next실행
      next(err);
    } else {
            ...code...
    }
  });
});


...code...

//어떠한 경로에도 일치하지 못했을때 실행되는 함수
//꼭 맨 밑에 적어야 됨
app.use(function(req, res, next) {
  res.status(404).send('Sorry cant find that!');
});
 
//next(err)일때 실행되는 부분
app.use(function (err, req, res, next) {
  console.error(err.stack)
  res.status(500).send('Something broke!')
});
 
```


#### Router
##### main.js
```js
var express = require('express');
var app = express();

var topicRouter = require('./routes/topic');

app.use('/topic', topicRouter);
```
> /topic 으로 시작하는 경로로 요청이 들어올 경우 /routes/topic이 실행

##### /routes/topic.js
```js
...code...

module.exports = router;
```
> 파일을 외부에서 사용하려면 module.exports를 꼭 해주어야 됨


#### 보안
```
npm install helmet
```
```js
var helmet = require('helmet')
app.use(helmet());
```
> 기본적으로 사용하는 걸 권장


#### express-generator
기본 구조를 가진 express 앱을 만들어 주는 기능
```
npm install express-generator -g
```
> express generator 다운로드
```
express myapp
```
> myapp이라는 이름의 express 앱 생성
```
cd myapp
npm install
npm start
```
> 생성된 앱 폴더로 이동 후, 필요한 모듈 설치 및 실행

-----

### 쿠키와 인증

#### 쿠키 생성
```js
 response.writeHead(200, {
    'Set-Cookie':['yummy_cookie=choco', 'tasty_cookie=strawberry']
});
```

#### 쿠키 읽기
##### 쿠키 모듈 설치
```
npm install cookie
```
##### 쿠키 모듈 사용
```js
var http = require('http');
//쿠키 모듈 import
var cookie = require('cookie');

http.createServer(function(request, response){
    console.log(request.headers.cookie);

    //쿠키 읽기
    var cookies = {};
    if(request.headers.cookie !== undefined){
        cookies = cookie.parse(request.headers.cookie);
    }
    console.log(cookies.yummy_cookie);

    //쿠키 생성
    response.writeHead(200, {
        'Set-Cookie':['yummy_cookie=choco', 'tasty_cookie=strawberry']
    });
    response.end('Cookie!!');
}).listen(3000);
```
> request.headers.cookie = 쿠키 값

#### Session 쿠키 VS Permanent 쿠키
##### Session 쿠키
웹브라우저를 끄면 사라지는 휘발성 쿠키
##### Permanent 쿠키
웹브라우저를 꺼도 사라지지 않는 쿠키

```js
'Set-Cookie':[
            `Permanent=cookies; Max-Age=${60*60*24*30}`
        ]
```
> Max-Age : 쿠키가 얼마나 생존할 것인가
> Permanent=cookies : 쿠키 이름 = 쿠키 값

#### Secure & HttpOnly
##### Secure
웹브라우저와 웹서버가 https로 통신하는 경우만 웹브라우저가 쿠키를 서버로 전송하는 옵션
##### HttpOnly
웹 브라우저 콘솔에서 자바스크립트의 document.cookie를 이용해서 쿠키에 접속하는 것을 막는 옵션

```js
'Set-Cookie':[
            'Secure=Secure; Secure',
            'HttpOnly=HttpOnly; HttpOnly'
        ]
```
> '쿠키이름=쿠키값; Secure' : https로 접근 했을 때에만 쿠키가 생성되게 하는 옵션

> 쿠키이름=쿠키값; HttpOnly' : 웹 브라우저 개발자 모드의 콘솔에서 js로 쿠키 확인을 하지 못하게 하는 옵션

#### path & domain

```js
'Set-Cookie':[
            'Path=Path; Path=/cookie',
            'Doamin=Domain; Domain=test.o2.org'
        ]
```

> '쿠키이름=쿠키값; Path=/경로' : 지정해둔 경로와 그 하위 경로에서만 쿠키가 전송되도록 하는 옵션

> '쿠키이름=쿠키값; Domain=주소' : 해당 도메인과 서브 도메인에서 쿠키가 생존하도록 하는 옵션

#### 쿠키 삭제
```js
 response.writeHead(302, {
        'Set-Cookie': [
          `email=; Max-Age=0`,
          `password=; Max-Age=0`,
          `nickname=; Max-Age=0`
        ]
```

------
### Express-Session-Auth

#### express-session
```
npm install express-session
```

##### 세션 생성
```js
app.use(session({
  secret: 'asadlfkj!@#!@#dfgasdg',
  resave: false,  //세션 값이 바뀌어야 다시 저장
  saveUninitialized: true  //세션이 필요하기 전까지는 세션 구동하지 않음
}))
```

##### session 객체 example
```js
app.get('/', function (req, res, next) {
    console.log(req.session);
    if(req.session.num === undefined){
        req.session.num = 1;
    } else {
        req.session.num =  req.session.num + 1;
    }
    res.send(`Views : ${req.session.num}`);
})
```
> session에 num이라는 값이 없으면 1로 세팅, 있으면 값을 1씩 증가

> session 값은 기본적으로 memory에 저장, 서버 종료시 휘발

#### 세션 저장소
```
npm install session-file-store
```
```js
var FileStore = require('session-file-store')(session)
```
> 디폴트로 ./sessions에 sessions 파일 자동으로 생성

> 세션 값이 저장, 로드, 수정이 자동으로 이루어지는 미들웨어

#### 세션 저장
```js
 request.session.save(function(){
      response.redirect(`/`);
    });

```
> session 저장소에 저장을 한 뒤 function을 실행

#### 세션 삭제 
```js
 request.session.destroy(function(err){
    response.redirect('/');
  });
```

----------------------

### Passport.js

#### Passport 설치
```
npm install passport

//로컬 로그인 구현시
npm install passport-local
```
```js
var passport = require('passport')
  , LocalStrategy = require('passport-local').Strategy;
```
> 세션 뒤에 작성할 것

#### 인증 구현
```js
app.post('/auth/login_process',
  passport.authenticate('local', {
    successRedirect: '/',
    failureRedirect: '/auth/login'
  }));
```
``` 
passport.authenticate('방식', {
    successRedirect: '성공시 url',
    failureRedirect: '실패시 url'
  }));
  ```

#### 로그인 구현


```js
//passport 콜백 함수
passport.use(new LocalStrategy(
  {
    usernameField: 'email',
    passwordField: 'pwd'
  },
  function (username, password, done) {
    ...code...
  }
));
```
> 위와 같이 usernameField와 passwordField를 설정해주면 form name을 username password로 맞춰주지 않아도 동작

```js
passport.serializeUser(function(user, done) {
    //세션에 passport의 값으로 user.id값이 들어가게 됨
  done(null, user.id);
});

//이 함수 안의 done의 2번쨰 인자 값이 request.user의 값
passport.deserializeUser(function (id, done) {
  console.log('deserializeUser', id);
  done(null, authData);
});

function (username, password, done) {
    if(username === authData.email){
      if(password === authData.password){
          //로그인 성공 done 호출 -> 유저 정보 (authData)를 passport.serializeUser 첫번째 인자로 넘김
        return done(null, authData);
      } else {
          //로그인 실패(비번 틀림) done 호출 -> passport.serializeUser 실행
        return done(null, false, {
          message: 'Incorrect password.'
        });
      }
    } else {
        //로그인 실패(유저네임 틀림) done 호출 -> passport.serializeUser 실행
      return done(null, false, {
        message: 'Incorrect username.'
      });
    }
  }
```
##### 로그인 확인 방법
```js
request.user
```
> passport.deserializeUser의 done 함수의 2번째 인자 값을 passport가 request에 user라는 객체로 주입시켜줌


#### 로그아웃
```js
router.get('/logout', function (request, response) {
  request.logout();
  request.session.save(function(){
    response.redirect('/');
  });
});
```
> request.logout() 으로 passport 로그아웃 진행

> 세션 삭제 반영이 잘 되지 않는 문제로 인해 request.session.save 작업 추가

----------
### 플래쉬 메시지
#### connect-flash 설치
```
npm install connect-flash
```
```js
var flash = require('connect-flash');
app.use(flash());
```

> 세션 뒤에 미들웨어 사용이 위치하도록

> flash massage는 1회성, 한 번 사용하고 나면 삭제


#### 예제
```js
app.get('/flash', function(req, res){
  req.flash('msg', 'Flash is back!!');
  res.send('flash');
});

app.get('/flash-display', function(req, res){
  var fmsg =  req.flash();
  console.log(fmsg);
  res.send(fmsg);
});
```
> /flash -> session에 flash{msg:'Flash is back!!'} 추가

> 다른 페이지로 이동하거나 하면 저장되었던 것이 삭제

------
### Passport.js 플래쉬 메시지
```js
app.post('/auth/login_process',
  passport.authenticate('local', {
    successRedirect: '/',
    failureRedirect: '/auth/login',
    failureFlash:true,
    successFlash:true
  }));
```
> failureFlash : 로그인 실패 시 flash massage 사용 옵션

> successFlash : 로그인 성공 시 flash massage 사용 옵션

```js
passport.use(new LocalStrategy(
  function (username, password, done) {
    if(username === authData.email){
      if(password === authData.password){
        return done(null, authData, {
            //성공 시 나올 flash massage
          message: 'Welcome.'
        });
      } else {
        return done(null, false, {
            //실패 시 나올 flash massage
          message: 'Incorrect password.'
        });
      }
    } else {
      return done(null, false, {
          //실패 시 나올 flash massage
        message: 'Incorrect username.'
      });
    }
  }
));
```

```js
var fmsg = request.flash();
var feedback = '';
if(fmsg.error){
    feedback = fmsg.error[0];
}
```
> request.flash().error[0] : flash 값