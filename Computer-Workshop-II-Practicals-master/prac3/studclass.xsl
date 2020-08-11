<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE html>
<html xsl:version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<body style="padding-left:400px;padding-top:100px;background-color:grey;">
  <table border="1">
    <tr>
      <th><div style="background-color:white;padding:20px;border:2px solid Dodgerblue;"><span style="font-family:cambria;color:blue"> Name: </span></div></th>
      <th><div style="background-color:violet;padding:20px;padding-left:30px;color:purple">  Age: </div></th>
      <th><div style="background-color:skyblue;padding:20px;font-size:12pt;padding-left:30px;color:purple"> Roll No.: </div></th>
      <th><div style="background-color:greenyellow;padding:20px;font-size:12pt;padding-left:30px">
    <span style="color:red"><b> Class: </b></span></div></th>
    </tr>
<xsl:for-each select="student/stud">
<tr>
  <td><div style="background-color:white;padding:20px;border:2px solid Dodgerblue;">
    <span style="font-family:cambria;color:blue"><xsl:value-of select="name"/></span>
  </div>
  </td>


  <td>
  <div style="background-color:violet;padding:20px;padding-left:30px;color:purple"><xsl:value-of select="age"/>
  </div>
  </td>

  <td><div style="background-color:skyblue;padding:20px;font-size:12pt;padding-left:50px;color:purple"><xsl:value-of select="rollno"/>
  </div>
  </td>

  <td><div style="background-color:greenyellow;padding:20px;font-size:12pt;padding-left:40px">
    <span style="color:red"> <b><xsl:value-of select="class"/></b> </span>
  </div>
  </td>

</tr>

</xsl:for-each>

</table>
</body>
</html>
