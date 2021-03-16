var mysql = require('mysql');
var crypto=require('crypto');
var bodyParser=require('body-parser');
var express=require('express');
var Uuid=require("uuid");

var con = mysql.createConnection({
  host: "localhost",
  user: "root",
  password: "",
  database: "wallet_app"
});

con.connect(function(err) {
  if (err) throw err;
  console.log("Connected!");
  
});
//password creator
var getRandomString =function(length){
  return crypto.randomBytes(Math.ceil(length/2))
          .toString('hex')
          .slice(0,length);

};

var sha512=function(password,salt)
{
  var hash=crypto.createHmac('sha512',salt);
  hash.update(password);
  var value=hash.digest('hex');
  return {
    salt:salt,
    passwordHash:value 
  };
};

function saltHashPassword(userPassword){
  var salt=getRandomString(16);
  var passwordData=sha512(userPassword,salt);
  return passwordData;

} 

var app=express();
app.use(bodyParser.json());
app.use(bodyParser.urlencoded((true )));


app.get("/",(req,res,next)=>{
    console.log('Password : 123456');
      var encrypt=saltHashPassword("123456");
      console.log("Encrypted: "+encrypt.passwordHash);
      console.log("Salt: "+encrypt.salt);
});
app.listen(80,()=>{
  console.log("AVN DEVELOPERS");
});