var fs = require('fs');

//read file sync -> 동기
// console.log('A');
// var result = fs.readFileSync('data/sample.txt', 'utf8');
// console.log(result);
// console.log('C');

//read file -> 비동기
console.log('A');
fs.readFile('data/sample.txt', 'utf8', function(err, result){
    console.log(result);
});
console.log('C');
//A 작업 후 fs는 자기 나름대로 작업을 하면서 C를 작업
// fs는 작업 후 결과(result) 또는 에러(err)값을 가지고 함수가 호출되면서 함수 안의 내용이 실행