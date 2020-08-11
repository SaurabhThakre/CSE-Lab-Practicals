<html>
<body>

<?php
echo "Student Name:".$_POST["title"]." ".$_POST["first"]." ".$_POST["last"]."<br/>";
echo "Roll Number:".$_POST["roll"]."<br/>";
echo "Semester:".$_POST["semester"]."<br/><br/>";

echo "Marks of 3 Subjects"."<br/>";
echo "Maths:".$_POST["math"]."<br/>";
echo "OOP:".$_POST["oop"]."<br/>";
echo "SP:".$_POST["sp"]."<br/><br/>";
$x=$_POST["math"];
$y=$_POST["oop"];
$z=$_POST["sp"];

echo "Percentage:".($x+$y+$z)/3."<br/>";

echo "Number:".$_POST["number"]."<br/>";
echo "Email:".$_POST["email"]."<br/>";
?>

</body>
</html>