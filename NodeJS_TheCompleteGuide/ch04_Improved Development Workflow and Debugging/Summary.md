### ch04

#### npm

##### npm 사용하기
```
npm init
```
> pakage.json 생성

##### package.json 사용하기
```json
{
    ...
    "sctipts":{
        "start": "node app.js"
    },
    ...
}
```
> 다음과 같이 작성할 경우, ```npm start``` 라는 명령어를 통해서 ```node app.js```와 똑같은 기능을하여 app.js를 실행 할 수 있음

##### 외부 package 사용하기
```
npm install package이름
```

##### npm install 옵션
```
npm install -g package이름
npm install --save package이름
npm install --save-dev package이름
```
> -g : 글로벌로 install, 어디에서든 사용 가능

> --save : 패키지를 ```./node_moduels```에 설치하고 ```package.json```의 dependencies에 패키지 정보가 포함이 됨. 또한 ```--production``` 빌드 시 해당 패키지가 포함됨.

> --save-dev : 패키지를 ```./node_moduels```에 설치하고 ```package.json```의 dependencies에 패키지 정보가 포함이 됨. ```--production``` 빌드 시 해당 패키지가 포함되지 않음.

##### 모든 package 설치
```
npm install
```
> package.json 에 명시된 모든 package들을 설치

