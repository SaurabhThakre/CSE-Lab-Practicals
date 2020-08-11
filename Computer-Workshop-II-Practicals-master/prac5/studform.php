<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN"
"http://www.w3.org/TR/html4/loose.dtd">

<html>
<head>
  <title>PHP</title>
</head>
<body>

<h1 style = "text-align:center;color:red;">Student Details</h1>
<hr>
<form action="prac5.php" method="post">
<b><span>Name</span><span style="color:red">*</span></b><br><br>
<input type="text" name="title" size="2"> <input type="text" name="first" > <input type="text" name="last" ><br>
<pre> Title          First                    Last</pre>
<input type="text" name="roll" size="2" required>
<pre>Roll No.</pre>
<select name="semester">
    <option value="select">Select</option>
    <option value="I">I</option>
    <option value="II">II</option>
    <option value="III">III</option>
    <option value="IV">IV</option>
    <option value="V">V</option>
    <option value="VI">VI</option>
    <option value="VII">VII</option>
    <option value="VIII">VIII</option>
  </select>
<pre>Semester</pre>
<br>
<b><span>Marks</span><span style="color:red">*</span></b><br><br>
<input type="text" name="math" size="5" > <input type="text" name="oop" size="5" > <input type="text" name="sp" size="5" ><br>
<pre> Maths       OOP        SP</pre>
<br>
<b><span>Mobile Number</span><span style="color:red">*</span></b><br><br>
<input type="text" name="number">
<br><br>
<b><span>Email</span><span style="color:red">*</span></b><br><br>
<input type="email" name="email">
<br><br>
<input type="submit">
</form>
<br>

</body>
</html>