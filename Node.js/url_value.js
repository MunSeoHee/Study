var http = require('http');
var fs = require('fs');//파일 시스템
var url = require('url');

function templateHTML(title, list, body){
    return `
    <h1>${title}</h1>
    <ol>
    ${list}
    </ol>
    <h2>WEB</h2>
    <p>
        ${body}
    </p>
    `;
}

function templateList(filelist){
    var list = '<ul>';
    var i = 0;
    while (i < filelist.length) {
        list = list + `<li><a href="/?id=${filelist[i]}">${filelist[i]}</a></li>`;
        i = i + 1;
    }
    list = list + '</ul>';
    return list;
}

var app = http.createServer(function (request, response) {
    var _url = request.url;
    var queryData = url.parse(_url, true).query;
    var pathname = url.parse(_url, true).pathname;



    if (pathname === '/') {
        if (queryData.id === undefined) {

            fs.readdir('./data', function (error, filelist) {
                console.log(filelist);
                var title = 'Welcome';
                var description = 'Hello Node.js';
                var list = templateList(filelist);
                var template = templateHTML(title, list, `<h2>${title}</h2>${description}`);
                response.writeHead(200);
                response.end(template);
            })




        }
        else {
            fs.readdir('./data', function (error, filelist) {
                console.log(filelist);
                var title = queryData.id;
                var list = templateList(filelist);
                fs.readFile(`data/${title}`, 'utf-8', function (err, data) {
                    var description = data;
                    var template = templateHTML(title, list, `<h2>${title}</h2>${description}`);
                    response.writeHead(200);
                    response.end(template);
                });
            });
        }

    }
    else {
        response.writeHead(404);
        response.end('Not Found');
    }





});
app.listen(3000);