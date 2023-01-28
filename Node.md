> # Introduction
* Node Js is `Free and Open-Source`
* It is not a language, its a `Server Environment` 
* Node runs Js on Server, making it Server Side Lang
* Code and syntax similar to JavaScript, but not exactly same.
* Node can connect with Database, while Js can't (since Js runs on browser and Node runs on server side)
* Node uses Chrome's V8 Engine to execute code.

### Uses
* It is used mostly for `API` - to connect same database with web-app, mobile-app (It is superfast for APIs)
* It is actualy used to `connect Server with Client`
* It can `create websites` too.

### History
* First Release - May 27, 2009
* Current Version -
* Written in - C, C++, JavaScript

### Client Vs Server Side
* Client---------Request->/ <-Reponse--------Server
* **`Client`** - Sends Request - Web-app/ Mobile-app - Ex : Your desktop sending req on google.com
* **`Server`** - Takes Request and Sends Response - Database/ File System - Ex : google.com

### Where Node is used in Client/Server Side?
* **`Server Side`** - NodeJs, Python, Java, PHP,  - Connects with DB, File System - stores data 
* **`Client Side`** - HTML, CSS, JavaScript - Takes response (in API form) and make it presentable

### How Node uses Js
* Js executes on browser and Chrome Browser has V8 Engine - Code of Js in browser is sent to V8 engine which executes Js and returns result
* Node uses V8 Engine - Code is sent to V8 engine which executes it and returns result
* So common connectivity between JS nd NodeJs is - `V8 Engine`
* Since V8 Engine is written in C++ and Node Js uses V8 Engine, so we say Node is written in C++ too.

### Installation 
* Download Node from browser
* Install NPM and Node
* Recommended Code Editor - Visual Studio


> ## First Program - Script with Command Line
1. Script with Command Line
    * No need to go in any particular directory, since node is installed globally it can be used anywhere
    * Open CMD
    * Disadvantages - Program cannot be saved - Its just temporary
```js
> console.log("Hello")
Hello
Undefined // Means stmt returns nothing
> var x = 10;
Undefined
> var y = 20;
Undefined
> console.log(x+y)
30
Undefined
```
2. Make folder and file
    * Create Folder : node-prog
    * Open this folder in VS Code
    * Create a file : index.js - Here js extension is used `because Node is not a lang, its just a server side env, which runs JS code using V8 Engine`
3. write first code and run
    * Write following code in this file
    * Run using `node .\index.js`
```js
console.log("Hello") /// Hello
var x = 10;
var y = 20;
console.log(x+y) /// 30
```
---
Question - Is console of Browser and of VS Code Same?

Answer - No, both are different - Browser's console is a browser's function whereas VS Code's console is a Node's Console Module and not a part of Js.
_" In node - The console module provides a simple debugging console that is similar to the JavaScript console mechanism provided by web "_

Console is of 3 types - 
1. console.log()
2. console.error()
3. console.warn()
---

> # Fundamentals of NodeJs
* Variables, Conditions, loops, array, object - All same as JS
* `Export - Import` are quite different (Since Node generally has older version of Js)
### Import - Export
```js
// app.js
module.exports = {
    x:10,
    y:20,
    xyz:function()
    {
        return 10+20;
    }
}
```
```js
// index.js
const app = require('./app')
console.log(app.x)      /// 10
console.log(app.xyz()) /// 30
```
1. Way to Import modules: 
* `const fs = require('fs)`
2. Not necessary to import at the top, but it is recommended.

3. Can import only specific functions
* `const fs = require('fs).writeFileSync`
4. Not neccesarry to put var name same as module while importing, but its recommended
* `const fsModule = require('fs)`


> # Modules
1. **Core Modules** - Built-in modules which exist By default. Ex : console, fs, buffer, http
    1. **Global Modules** - No need to import them. Ex : console
    2. **Non - Global Modules** - Need to import. Ex : fs 

2. **External Modules** - Local and Third party Modules


> # Basic Server - Output on Browser
* Make Basic Server
* Callback(Function as Parameter), Arrow Functions
* Get output on Browser
* http module - Handles req and resp of Server in NodeJs
* http.createServer( (req, resp) => {
   ..... resp.end();
})  . listen(4500);
```js
const http = require('http');
http.createServer((req, resp)=>{
    resp.write("Hello World"); /// Hello World as output on screen
    resp.write("<h1>Hello</h1>") /// Hello as HTML Heading on screen
    resp.end();
}).listen(4500);
```

> # Package.json File
* Stores Project details - project version, package, commands.
* This is the most important file of project - should not be deleted.
* Package-lock.json - Has pkg dependency details in much elaboration - No problem if deleted
* Create pkg.json : npm init - asks pkg name, version, description, entry point(index.js), test commands, git repo, keywords, author, license(leave it empty)
* Install package : npm i xyz
* If already have pkg.json : npm install

> #  Nodemon | Time saving module
* Earlier : node .\index.js
* Now : nodemon .\index.js
```js
npm i nodemon -g
```
---
* Question : NodeJs is Single/Multi Threaded
* Answer : Single Threaded - Runs one command at a time*
---

* Question : NodeJs is Sync/Async language
* Answer : Async Language - Might not run sequentially - 2nd cmd won't wait for 1st cmd to finish - Does not wait for any command - Super Fast
---
<br>

> # Make a simple API
* Make a Server
* Create header and API body
* Create an API with static data
```js
// index.js 

const http = require('http');
// Import data
const data = require('./data');

// Create Server
http.createServer((req, resp)=>{
    // Create Header
    resp.writeHead(200, {'Content-Type':'application\json'});
    // Create Body
    resp.write(JSON.stringify(data));
    resp.end();
}).listen(6000);

// Run this at postman or browser at http://localhost:6000/
```
```js
// data.js

const data = {name:'Ayushi', email:'ayushi@gmail.com'}
module.exports = data
```
* When data is multiple users
```js
// index.js 

const http = require('http');
// Import data
const data = require('./data');

http.createServer((req, resp)=>{
    // Create Header
    resp.writeHead(200, {'Content-Type':'application\json'});
    // Create Body
    resp.write(JSON.stringfy(data));
    resp.end();
}).listen(6000);

// Run this at postman or browser at http://localhost:6000/
```
```js
// data.js

const data = [
    {name:'Ayushi', email:'ayushi@gmail.com'},
    {name:'Ayushi1', email:'ayushi1@gmail.com'},
    {name:'Ayushi2', email:'ayushi2@gmail.com'}
]
module.exports = data
```
---
* Question : Important Status Codes
* Answer : 
1. 1xx - Informationaln - indicates that the acceptance and continuation of the requests.
2. 2xx - Success - indicates that the request is successfully received, accepted, and resolved.
    - 200 - OK
    - 201 - Created
    - 204 - No Content
3. 3xx - Redirection - indicates that some additional action has to be done by the client to fulfill the request.
    - 304 - Not modified
4. 4xx - Client Error - indicates that a client request causes some problem.
    - 400 - Bad Request
    - 401 - Unauthorized
    - 402 - Payment Request
    - 403 - Forbidden
    - 404 - Not Found
    - 409 - Conflict
5. 5xx - Server Error - indicates that everything is excellent with the request, but an error occurred on the server-side.
    - 500 - Internal Server Error
---
<br>

> # File System
## Input From Command Line
* Set input from Command Line
* Create file with input
* Delete the file with input
### process -
* Object containing mostly everything of node
### process.argv -
* returns [1. Path where node is saved, 2. Path from where node is run, 3.4. - arguments if passed]
```js
node index.js hello hi
```
```js
console.log(process) /// {....} 
console.log(process.argv) /// ['C:..\\node.exe', 'C:..\\index.js, 'hello', 'hi'] 
console.log(process.argv[2]) /// hello
console.log(process.argv[3]) /// hi
```
### Requirement 
* Create a file by passing 3 input - 1. add/remove 2. File name 3. File Content
```js
1. node index.js add file1.txt 'This is file 1'
2. node index.js add file2.txt 'This is file 2'
3. node index.js add file3.txt 'This is file 3'
4. node index.js remove file3.txt 
5. node index.js abc file3.txt 

```
```js
const fs = require('fs');

const input = process.argv;
if(input[2]=='add'){
    fs.writeFileSync(input[3], input[4]) /// files getting created
} else if(input[2]=='remove'){
    fs.unlinkSync(input[3]) /// 4. file3.txt got deleted
} else{
    console.log("Invalid Input") /// 5.
}
```

> # Path Module
* By default files get created on root folder but if explicitly we want to create inside any folder we need to get that folders path and so we use path module
* Make files in a folder
* Use path module
* Get files name and print on console
* `__dirname` : Path of current directory
* `path.join(__dirname, 'files')` : path of files folder - Creates file folder
### Requirement - Create files in loop
```js
const fs = require('fs');
const path = require('path');

const dirPath = path.join(__dirname, 'files')
console.log(dirPath) /// C:...\node-tut\files

// Create new files
for(i=0; i<5; i++){
    fs.writeFileSync(`${dirPath}/file_${i+1}`, 'A simple file content');
}

// Read files directory as array of files
fs.readdir(dirPath, (err, item)=>{
    console.log(item) /// ['file_1',..'file_5'] // array of files
}) 

// Read files directory as individual file
fs.readdir(dirPath, (err, itemFiles)=>{
    itemFiles.forEach((itemFile)=>{
        console.log(itemFile) /// file_1 .... file_5
    })
    console.log(itemFiles) /// ['file_1',..'file_5'] // array of files
}) 
```
---
* Question : Can I access files from other drives apart from this app
* Answer : No - The folder you are running your Node code now acts as a web server, this itself is environment, everything outside is beyond its knowledge
If this access could be possible - anyone could get your data
---
<br>

> # CRUD with File System
* Create file
* Read file
* Update file
* Delete file
* Rename file (not a part of CRUD operations but still we'll see it)
```js
const fs = require('fs');
const path = require('path');

const dirPath = path.join(__dirname, 'crud')
const filePath = `${dirPath}/file1.txt`;

// Create File
fs.writeFileSync(filePath, 'File Content')

// Read File
fs.readFile(filePath, 'utf8' (err, item)=>{
    console.log(item) /// <Buffer 54 68 76 86 6c ...> // Without 'utf8
    console.log(item) /// File Content // With 'utf8

// Update File
fs.appendFile(filePath, ' and file name is file1.txt', (err)=>{
    if(!err) console.log("File is Updated")
}) // Everytime u run this - this content gets concatenated

// Rename File
fs.rename(filePath, `${dirPath}/File_Updated.txt`, (err)=>{
    if(!err) console.log("File name is Updated")
})

// Delete File 
fs.unlinkSync(`${dirPath}/File_Updated.txt`)
})
```

> # Asynchronous Basics in NodeJs
* Execution order is - 1 -> 2 -> 4 -> 3
```js
1 let a = 20;
2 let b = 0;

3 setTimeout(()=>{
    b=30;
}, 2000)

4 console.log(a+b)  /// 20 // ans should be 50
```
* Promises can be used to correct these! - Put line giving late resp inside promises
```js
1 let a = 20;
2 let b = 0;

let waitingData = new Promise((resolve, reject)=>{
setTimeout(()=>{
    resolve(30); // inplace of b=30
}, 2000)
})

waitingData.then((data)=>{
    b = data;
    console.log(a+b) /// 50
})
```
* Create promise
* Inside complex code, put output data in resolve
* then use that promise with then to get data

> # How Node actually works!
* Call Stack
* Node API
* Callback Queue
* Event Loop

### Working
* Program starts executing - main() is already in callstack - Functions keep coming in Call Stack 
* As function executes fully - it gets out of the stack - FILO order
* setTimeout is of C++ / Anything other than JavaScript - comes in Node API
* When setTimeout times up means when its ready to execute - It comes in CallBack Queue based on the order which can be finished first comes first
* When call stack becomes empty (even main() gets closed) then everything from Callback Queue comes in call stack

```js
1 console.log("Starting")

2 setTimeout(()=>{
    console.log("2 sec")
}, 2000)

3 setTimeout(()=>{
    console.log("0 sec")
}, 0)

4 console.log("Ending")

// Output 
Starting 
Ending
0 sec
2 sec
```
* Program starts executing - main() comes in callstack - line 1 executes - log("Starting") comes in callstack, executes, removed - Line 2 starts - goes in Node API - line 3 starts - goes in Node API - Line 4 starts - log("Ending") comes in callstack, executes, removed - main() got fully executes so goes out of callstack
* Meanwhile line 2 amd line 3 in Node API are moved to callback queue - when call stack becomes empty - lines are moved in call stack such that line 3 enters first as it will take less time to execute - then comes line 2 and end
--- 
<br>
<br>

> # Express Js
* Node Js framework
```js
npm i express
```
```js
const express = require('express');
const app = express(); // Making express module executable

app.get('', (req, resp)=>{ // get() provide routes
    resp.send("This is Home Page")
})

app.get('/about', (req, resp)=>{ 
    resp.send("This is About Page")
})
app.listen(5000);
```

> # Get Params from Requests
```js
localhost:5000/?name=ayushi
```
```js
const express = require('express');
const app = express(); 

app.get('', (req, resp)=>{ 
    console.log("data", req.query); /// data {name : 'ayushi'}
    resp.send(`Welcome $req.query.name`);
})
app.listen(5000)
```

> # Render HTML and JSON
* Show HTML Tags
* Show JSON data
* Link pages
```js
const express = require('express');
const app = express(); 

app.get('', (req, resp)=>{ 
    resp.send(`<h1>This is Home Page</h1> 
    <a href ="/about"> Go to about page </a>
    <a href ="/help"> Go to help page </a>`)
})
// localhost:5000/about?name=ayushi
app.get('/about', (req, resp)=>{ 
    resp.send(`
    <input type="text" placeholder="Enter Name" value=${req.query.name} />
    <button> Click Me </button>
    <a href ="/"> Go to home page </a>
    `)
})
app.get('/help', (req, resp)=>{ 
    resp.send([
        {
            name : 'ayushi',
            email : 'ayushi@gmail.com'
        },
        {
            name : 'ayushi1',
            email : 'ayushi1@gmail.com'
        }
    ])
})

app.listen(5000);
```

> # Make HTML Pages
* Make folder for HTML files and access it
* Create HTML files
* Load HTML files
* Req - 6-7 HTML pages but making it in one file will be so much and that too in ` ` like previously
* Create folder - Public 
* File inside it - about.html

```html
<!-- about.html -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>About page</title>
    <style>
    h1{
        color:red;
    }
    </style>
</head>
<body>
    <h1> About Page </h1>
</body>
</html>
```

### `express().use(express.static(path))`
* use - Middleware - Function of express Js
* express.static() - loads static content like html
* use() - executable function(app)'s function
* static() - express module's function

```js
// index.js

const express = require('express');
const path = require('path');

const app = express();
const publicPath = path.join(__dirname, 'public');

app.use(express.static(publicPath));

app.listen(5000);

// localhost:5000/about.html - Note! : about.html
```
* Index.html - root page - localhost:5000/
* Similarly create other pages
* Can't use external css files in these html pages - because path loads from index.js

> # Remove extensions from URL
* Remove an extension from URL : to refrain from showing which tech we have used
* localhost:5000/about.html -> localhost:5000/about 
* Apply get method not use
* Load different page on different URL
* Make 404 page
* Apply 404 page

1. Remove extension from URL
```js
// index.js

const express = require('express');
const path = require('path');

const app = express();

// since req is not used- make it _
app.get('', (_,resp)=>{
    resp.sendFile(`${publicPath}/index.html`)
})
 // localhost:5000

app.get('/about', (_,resp)=>{
    resp.sendFile(`${publicPath}/about.html`)
}) 
// localhost:5000/about

app.listen(5000);
```

2. Load different page on different URL
```js
// index.js

const express = require('express');
const path = require('path');

const app = express();

app.get('/aboutme', (_,resp)=>{
    resp.sendFile(`${publicPath}/about.html`)
}) // About.html on - localhost:5000/aboutme

app.use(express.static(publicPath));

app.listen(5000);
```

3. 404 Page
```html
<!-- 404page.html -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>404 page</title>
</head>
<body>
    <h1> 404 Page </h1>
    <p> Page not found </p>
</body>
</html>
```
```js
// index.js

const express = require('express');
const path = require('path');

const app = express();

app.get('', (_,resp)=>{
    resp.sendFile(`${publicPath}/index.html`)
}) 
app.get('/aboutme', (_,resp)=>{
    resp.sendFile(`${publicPath}/about.html`)
}) 
// This is it - route should be *
app.get('*', (_,resp)=>{
    resp.sendFile(`${publicPath}/404page.html`)
}) 

app.listen(5000);
```

> # Template Engine
* What is template engine - Used to create dynamic pages(content from DB/ API)
* Install ejs template package - `npm i ejs`
* Setup dynamic routing 
* Make dynamic page
### Steps
1. app.set('view engine', template pkg name) - `app.set('view engine', 'ejs')`
2. Create folder with name - views(this name by default)
3. Create a file profile.ejs
4. Create route 
5. In place of resp.sendFile - Do `resp.render('profile')`
6. Send data - `resp.render('profile', {data})`
7. To show data in html file use `<%= variable_name %>`

```js
// index.js

const express = require('express');
const path = require('path');

const app = express();
const publicPath = path.join(__dirname, 'public');
// 1
app.set('view engine','ejs')

app.get('', (_,resp)=>{
    resp.sendFile(`${publicPath}/index.html`)
}) 
app.get('/aboutme', (_,resp)=>{
    resp.sendFile(`${publicPath}/about.html`)
}) 
// 2
app.get('/profile', (_,resp)=>{
    const user = {
        name : 'ayushi',
        email : 'ayushi@gmail.com'
    }
    // Sending data
    resp.render('profile', {user})
}) 

app.listen(5000);

```
```html
<!-- profile.ejs -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Profile page</title>
</head>
<body>
    <h1> Profile Page </h1>

    <!-- Get data -->
    <h2> Welcome <%= user.name %> </h2>
    <h3> Your id registered is <%= user.email %> </h3>
</body>
</html>
```

> # Dynamic Page

1. How to make loop in ejs 
* use <%= %> just like we use {} in js
2. Make Header file
* Create another folder in views - common - Make a file - header.ejs
3. Show common header file
* For creating common header - we need 2-3 files - so create login.ejs in views
* `header.ejs can be used only inside login.ejs and profile.ejs` - in ejs files only
* Use common header file as - `<%- include('common/header'); %>`
* `<%= %>` -- JavaScript file
* `<%- %>` -- HTML file
```js
// index.js

const express = require('express');
const path = require('path');

const app = express();
const publicPath = path.join(__dirname, 'public');

app.set('view engine', 'ejs')

app.get('', (_,resp)=>{
    resp.sendFile(`${publicPath}/index.html`)
}) 
app.get('/aboutme', (_,resp)=>{
    resp.sendFile(`${publicPath}/about.html`)
}) 
app.get('/profile', (_,resp)=>{
    const user = {
        name : 'ayushi',
        email : 'ayushi@gmail.com',
        skills : ['javascript', 'python', 'cpp'],
    }
    resp.render('profile', {user})
}) 
app.get('/login', (_,resp)=>{
    resp.render('login')
}) 
app.listen(5000);

```
```html
 <!-- profile.ejs -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Profile page</title>
</head>
<body>
     <!-- Add common header -->
    <%- include('common/header'); %>

    <h1> Profile Page </h1>
    <h2> Welcome <%= user.name %> </h2>
    <h3> Your id registered is <%= user.email %> </h3>

     <!-- Adding loop for dynamic data -->
    <ul>
        <%= user.skills.forEach((item)=>{
            <li> <%= item%> </li>
        })%>
    </ul>
</body>
</html>
```
```html
<!-- login.ejs -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login page</title>
</head>
<body>
    <!-- Add common header -->
    <%- include('common/header'); %>
    <h1> Login Page </h1>
</body>
</html>
```
```js
// header.ejs

<nav>
    <h3> Header File </h3>
</nav>
```

> # Middleware
### What are middleware? 
* Functions used with routes to access and modify request and response
### Need of middleware 
* Authentication, Block in some countries
### Why not modify req resp in routes, why middleware? 
* I have 50 routes - have to write same code 50 times, but with middleware only once
### How to make a middleware?
* Apply middleware on routes
* Types of middleware

### Types of Middleware
1. Application-level middleware - We used this - applied on all routes only
2. Router-level middleware
3. Error-handling middleware
4. Built-in middleware
5. Third-party middleware

### Middleware in same file

># Application-level middleware
* Applied globally on all routes

```js
// index.js
const express = require('express');
const app = express();

// If age is provided => page will be shown otherwise "Please provide age" will be shown
// 1 create middleware
const reqFilter=(req,resp,next)=>{
    // console.log('reqFilter');
    if(req.query.age){
        resp.send("Please provide age");
    }
    else if(req.query.age<18>){
        resp.send("You can't access");
    }
    else{
        next();
    }
}
// 2 Use middleware
app.use(reqFilter)

app.get('/', (req,resp)=>{
    resp.send(`Welcome to Home Page`)
}) 
app.get('/users', (req,resp)=>{
     resp.send(`Welcome to User Page`)
})  
app.listen(5000);

http://localhost:5000/user?age=2 /// You can't access
http://localhost:5000/user?age=22 /// Welcome to User Page
http://localhost:5000/about /// Please provide age
```


># Route Level Middleware
* Middleware working on single route, group of routes or all routes
* Apply Middleware on single route
* Make Middleware in different file
* Apply Middleware in the group of routes

1. Apply Middleware on single route
```js
// index.js
const express = require('express');
const app = express();

// 1 create middleware
const reqFilter=(req,resp,next)=>{
    // console.log('reqFilter');
    if(req.query.age){
        resp.send("Please provide age");
    }
    else if(req.query.age<18>){
        resp.send("You can't access");
    }
    else{
        next();
    }
}

app.get('/', (req,resp)=>{
    resp.send(`Welcome to Home Page`)
}) 
// 2. Use middleware - singe route 
app.get('/users', reqFilter, (req,resp)=>{
     resp.send(`Welcome to User Page`)
}) 
// 2. Use middleware - 2 routes
app.get('/about', reqFilter, (req,resp)=>{
     resp.send(`Welcome to About Page`)
})   
app.listen(5000);
```
2. Make Middleware in different file
```js
// middleware.js
module.exports = reqFilter=(req,resp,next)=>{
    // console.log('reqFilter');
    if(req.query.age){
        resp.send("Please provide age");
    }
    else if(req.query.age<18>){
        resp.send("You can't access");
    }
    else{
        next();
    }
}
```

```js
// index.js
const express = require('express');
const app = express();

// 1 Import middleware
const reFilter = require('./midleware');

app.get('/', (req,resp)=>{
    resp.send(`Welcome to Home Page`)
}) 
// 2. Use middleware
app.get('/users', reqFilter, (req,resp)=>{
     resp.send(`Welcome to User Page`)
}) 
// 2. Use middleware 
app.get('/about', reqFilter, (req,resp)=>{
     resp.send(`Welcome to About Page`)
})   
app.listen(5000);
```

3. Apply Middleware in the group of routes
```js
// index.js
const express = require('express');
const app = express();
// 1. Import Router() from express 
const route = express.Router();
// 2.  Import middleware
const reqFilter = require('./midleware');
// 3. Use middleware
route.use(reqFilter)

app.get('/', (req,resp)=>{
    resp.send(`Welcome to Home Page`)
}) 
app.get('/users', (req,resp)=>{
    resp.send(`Welcome to User Page`)
}) 

// 4. Add route.get for route u want to add middleware in
route.get('/about', (req,resp)=>{
     resp.send(`Welcome to About Page`)
})   
route.get('/contact', reqFilter, (req,resp)=>{
     resp.send(`Welcome to Contact Page`)
}) 

// 4. Add this
app.use('/',route)

app.listen(5000);
```
---
---

># MongoDB Installation
* Download DB
* Install MongoDB
* Set Environment for Mongo
- Program Files -> MongoDB -> Server -> Version -> bin
- Env -> User Variables -> Path
* MongoDB Compass Tool - GUI 
- (Other GUI Tool is Robot)
- Create Database - Create Collection(Table)

># MongoDB Basics
* `NoSQL Database` - Non-structured database - Some cols get wasted in SQL Tables - Ex : Optional fields in Forms
* Data gets stored in a collection
* Collection doesn't have rows and columns
* Data is stored in the form of objects

### Commands 
* Use CMD or MONGOSH terminal of compass itself
* `show dbs` - See all DBs
* `use youtube` - create database named youtube or go to youtube database
* `db.createCollection{'videos'}` - create collection named videos
* `show collections` - display collections
* `db.videos.drop()` - delete collection
* `db.dropDatabase()` - deletes current database

># CRUD Operations in MongoDB
* Create database named e-comm, collection named products
### Insert data :-
1. 
```js
use e-comm
db.products.inserOne({name:'m 40', brand:'samsung', price:100, category:'mobile'})
```
or
2. Add data -> Insert document -> Insert

### Check Inserted data
1. 
```js
db.products.find()
```
2. 3 views

### Update data
1. 
```js
db.products.updateOne({name:'m 40'}, {$set:{barnd:'oppo'}})
```
2. pencil symbol

### Delete data
1. 
```js
db.products.deleteOne({brand:'apple'})
```
2. delete symbol

># Connect Node with MongoDB
* Install mongodb pkg
`npm i mongodb`

* Connect node with mongodb
```js
// 1. Import mongoClient
const {mongoClient} = require('mongodb');
// or
const mongoClient = require('mongodb').MongoClient;

// 2. Set URL
const url = 'mongodb://localhost:27017'

// 3. node is client, server is mongodb 
const client = new mongoClient(url);

//4. Get data fumction
async function getData(){
    //5. Connect with mongodb
    let result = await client.connect();
    // 6. select database
    let db = result.db('e-comm');
    // 7. select collection
    let collection = db.collection('products');
    // 8. Extract data from collection using find and structure it using toArray()
    let response = await collection.find({}.toArray())
    console.log(response); // get data of products collection
}
getData();
```
* Simpler View :
```js
const {mongoClient} = require('mongodb');
const databaseName = 'e-comm'
const url = 'mongodb://localhost:27017'
const client = new mongoClient(url);

async function getData(){
    let result = await client.connect();
    let db = result.db(databaseName);
    let collection = db.collection('products');
    let response = await collection.find({}).toArray();
    console.log(response); 
}
getData();
```

# Read data from MongoDB
* Read data from mongoDB
* Make file for DB Connection
* Handle promise

```js
// mongoDB.js

const {mongoClient} = require('mongodb');
const databaseName = 'e-comm'
const url = 'mongodb://localhost:27017'
const client = new mongoClient(url);

async function dbConnect(){
    let result = await client.connect();
    let db = result.db(databaseName);
    return db.collection('products'); // returns promise
}

module.exports = dbConnect;
```
```js
// index.js
const dbConnect = require('./mongoDB')

1. Using Promises

dbConnect().then((resp)=>{
    // console.log(resp.find().toArray()) // returns promise
    resp.find({}).toArray().then((data)=>{
        console.log(data); //get all data
    })
})

2. Using async-await

const main = async () =>{
    let db = await dbConnect();
    data= await db.find({}).toArray();
    console.log(data);
}
```
### Final Format

```js
// mongoDB.js

const {mongoClient} = require('mongodb');
const databaseName = 'e-comm'
const url = 'mongodb://localhost:27017'
const client = new mongoClient(url);

async function dbConnect(){
    let result = await client.connect();
    let db = result.db(databaseName);
    return db.collection('products');
}

module.exports = dbConnect;


// index.js
const dbConnect = require('./mongoDB')

const main = async () =>{
    let db = await dbConnect();
    data= await db.find({}).toArray();
    console.log(data);
}
```

># Insert data from MongoDB
* Make new file for inserting data
* Import MongoDB Connection
* Insert single and multiple records

```js
// mongoDB.js

const {mongoClient} = require('mongodb');
const databaseName = 'e-comm'
const url = 'mongodb://localhost:27017'
const client = new mongoClient(url);

async function dbConnect(){
    let result = await client.connect();
    let db = result.db(databaseName);
    return db.collection('products');
}

module.exports = dbConnect;


// insert.js
const dbConnect = require('./mongoDB')

const insertData = async () =>{
    let db = await dbConnect();
    const result= await db.insertOne({name:'Note 5', brand:'vivo', price:320, category:'mobile'});
    // or
    const result= await db.insertMany(
        [
            {name:'Note 1', brand:'vivo', price:320, category:'mobile'},
            {name:'Note 2', brand:'vivo', price:520, category:'mobile'},
            {name:'Note 3', brand:'vivo', price:720, category:'mobile'}
        ]
    );
    console.log(result); /// acknowledged, insertedCount, insertedIds
    if(result.acknowledge){
        console.log("Data Inserted")
    }
}

insertData();
```

># Updata Data in MongoDB
* Make new file for Updating data
* Import MongoDB Connection
* Update single and multiple records
* In case of multiple records with same name, but u used updateOne - First record gets updated
```js
// mongoDB.js

const {mongoClient} = require('mongodb');
const databaseName = 'e-comm'
const url = 'mongodb://localhost:27017'
const client = new mongoClient(url);

async function dbConnect(){
    let result = await client.connect();
    let db = result.db(databaseName);
    return db.collection('products');
}

module.exports = dbConnect;


// update.js
const dbConnect = require('./mongoDB')

const updateData = async () =>{
    let db = await dbConnect();
    const result= await db.updateOne({name:'Note 5'}, {
        $set :{name:'Note 5 pro', price:550 }
    });
    // or
    const result= await db.updateMany({name:'Note 5'}, {
        $set :{name:'Note 5 pro', price:550 }
    });
    console.log(result); /// acknowledged, modifiedCount, upsertedIds, upsertedCount, matchedCount
    if(result.acknowledge){
        console.log("Data Updated")
    }
}

updateData();
```

># Delete Data in MongoDB
* Make new file for Deleting data
* Import MongoDB Connection
* Delete single and multiple records
* Check deleteCount - if somethig is really deleted
```js
// mongoDB.js

const {mongoClient} = require('mongodb');
const databaseName = 'e-comm'
const url = 'mongodb://localhost:27017'
const client = new mongoClient(url);

async function dbConnect(){
    let result = await client.connect();
    let db = result.db(databaseName);
    return db.collection('products');
}

module.exports = dbConnect;


// delete.js
const dbConnect = require('./mongoDB')

const deleteData = async () =>{
    let db = await dbConnect();
    const result= await db.deleteOne({name:'Note 5'});
    // or
    const result= await db.deleteMany({name:'Note 5'});
    console.log(result); /// acknowledged, DeletedCount
    if(result.acknowledge){
        console.log("Data Deleted")
    }
}

deleteData();
```

># API With MongoDB
* Make new file for API
* Import and use Mongo Configurations
* Make API for get data
* Test with Postman

```js

```