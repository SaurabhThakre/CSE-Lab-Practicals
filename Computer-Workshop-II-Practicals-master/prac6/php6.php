<?php
$database="mydb";
$ser="localhost";
$user="root";
$pass="";
$first=$_POST['first'];
$last=$_POST['last'];
$email=$_POST['email'];
$password=$_POST['password'];
    $con = mysql_connect($ser,$user,$pass,$database);
    if ($con)
    echo"Successful";
    mysql_select_db("$database", $con);

$query = "INSERT INTO login(first,last,email,password)VALUES ('$first','$last','$email','$password')";
if(mysql_query($query))
	echo"inserted";
mysql_close();
?>