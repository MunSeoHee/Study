const express = require('express');

const shop = express.Router();

shop.get('/',(req, res, next)=>{
    res.send('<h1>hello</h1>');
})

module.exports = shop;