<?php
$db="wallet_app";
$pass="";
$user="root";
$host="localhost";
$conn=mysqli_connect($host,$user,$pass,$db);
    if(!$conn)
        {echo "Not connect";}
    
?>