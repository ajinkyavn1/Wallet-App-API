var mysql = require('mysql');

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