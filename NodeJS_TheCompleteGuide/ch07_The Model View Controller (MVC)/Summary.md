### ch07

#### MVC
##### MVC란?
> model : 데이터 저장, 데이터 가져오기 등 

> views : 사용자가 보는 것

> controllers : model과 views를 연결, 즁간 관리자의 역할


#### controller 만들기

##### controllers 폴더 생성
controllers/funcs.js
```js
exports.func1 = (req, res, next)=>{
    ...
};
exports.func2 = (req, res, next)=>{
    ...
}
```

##### route에서 사용하기
```js
const express = require('express');
const funcController = require('../controllers/funcs.js');
const router = express.Router();

router.get('/func1', funcController.func1);
router.get('/func2', funcController.func2);

module.exports = router;
```

#### Model 만들기