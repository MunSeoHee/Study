var http = require('http');
var fs = require('fs');
var url = require('url');


var app = http.createServer(function(request,response){
    var _url = request.url;
    var queryData = url.parse(_url, true).query;
    console.log(queryData.id);
    var title=queryData.id;

    if(_url == '/'){
     title='welcome';
    }
    if(_url == '/favicon.ico'){
      return response.writeHead(404);
    }
    response.writeHead(200);
    fs.readFile(`data/${queryData.id}`,'utf8',function(err,description){
        console.log(description);
        var template= `<!doctype html>
    <html>
    <head>
      <title>WEB1 - ${title}</title>
      <meta charset="utf-8">
    </head>
    <body>
      <h1><a href="index.html">WEB</a></h1>
      <ol>
        <li><a href="/?HTML">HTML</a></li>
        <li><a href="/?CSS">CSS</a></li>
        <li><a href="/?JAVASCRIPT">JavaScript</a></li>
      </ol>
      <h2>${title}</h2>
      <p>${description} </p>
    </body>
    </html>
    `;
 
    response.end(template);
});
});
app.listen(3000);