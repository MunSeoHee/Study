// const http = require('http');

// const server = http.createServer((req, res)=>{
//     console.log(req.url, req.method, req.headers);
//     res.setHeader('Content-Type', 'text/html');
//     res.write('<html>');
//     res.write('<head><title>title</title>');
//     res.write('<body><h1>hello</h1></body>');
//     res.write('</html>');
//     res.end();
// });

// server.listen(3000);

const http = require('http');
const routes = require('./routes')

const server = http.createServer(routes);

server.listen(3000);
