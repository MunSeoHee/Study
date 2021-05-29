### 동기 & 비동기
> 한 일이 끝난 후에 다른 일을 하는 것 : 동기

> 여러 일을 동시에 진행하는 것 : 비동기

``` js
//read file sync (동기)
console.log('A');
var result = fs.readFileSync('data/sample.txt', 'utf8');
console.log(result);
console.log('C');
```

* 결과 : ```A -> sample.txt -> C```

``` js
//read file (비동기)
console.log('A');
fs.readFile('data/sample.txt', 'utf8', function(err, result){
    console.log(result);
});
console.log('C');
```
* 결과 : ```A -> C -> sample.txt ```

A작업 후 fs로 넘어가는데, fs는 자기 나름대로 작업을 하게 두고 그 다음작업인 C를 진행

fs작업이 다 끝나면 함수(function)을 실행


### Package Manager
> 소프트웨어들을 관리해주는 프로그램

- npm : nodejs pakage manager


>> pm2 : 무중단 서비스

``` pm2 start jsfile --watch``` : 변경사항 바로 반영해서 실행

``` pm2 log``` : 에러 등 문제 사항 보여줌

``` pm2 stop``` : 종료

