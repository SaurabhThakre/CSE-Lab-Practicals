package javaapplication12;

import java.util.*;

class college
{
    String name,dpname,cgpa,phno;
    Scanner clg= new Scanner(System.in);
    void getdata()
    {
    System.out.println("Name of student:");
    name=clg.next();
    System.out.println("Name of department:");
    dpname=clg.next();
    System.out.println("CGPA:");
    cgpa=clg.next();
    System.out.println("Phone number:");
    phno=clg.next();
    }
    void display()
    {
     System.out.println("Name of student:"+name);
     System.out.println("Name of department:"+dpname);
     System.out.println("CGPA:"+cgpa);
     System.out.println("Phone number:"+phno);
    }
}

class placement extends college
{
    String indnm,anpkg,jlno;
    @Override
    void getdata()
    {
        super.getdata();
        System.out.println("Industry Name:");
        indnm=clg.next();
        System.out.println("Anuual Package:");
        anpkg=clg.next();
        System.out.println("Joining letter no.:");
        jlno=clg.next();
    }
    @Override
    void display()
    {
        super.display();
        System.out.println("Industry Name:"+indnm);
        System.out.println("Anuual Package:"+anpkg);
        System.out.println("Joining letter no.:"+jlno);
    }
}

class highstudy extends college
{
    String dgname,clgnm,gyear,alno,cenm,score;
    @Override
    void getdata()
    {
        super.getdata();
        System.out.println("Degree Name:");
        dgname=clg.next();
        System.out.println("College Name:");
        clgnm=clg.next();
        System.out.println("Graduation Year:");
        gyear=clg.next();
        System.out.println("Addmission Letter No.:");
        alno=clg.next();
        System.out.println("Competitive Exam Name:");
        cenm=clg.next();
        System.out.println("Competitive Exam Score:");
        score=clg.next();
    }
    @Override
    void display()
    {
        super.display();
        System.out.println("Degree Name:"+dgname);
        System.out.println("College Name:"+clgnm);
        System.out.println("Graduation Year:"+gyear);
        System.out.println("Addmission Letter No.:"+alno);
        System.out.println("Competitive Exam Name:"+cenm);
        System.out.println("Competitive Exam Score:"+score);
    }
}

class entrepeneur extends college
{
    String cpnm,sect,emp,anto;
    @Override
    void getdata()
    {
       super.getdata();
       System.out.println("Company Name:");
       cpnm=clg.next();
       System.out.println("Sector:");
       sect=clg.next();
       System.out.println("No. of employees:");
       emp=clg.next();
       System.out.println("Annual turnover:");
       anto=clg.next();
    }
    @Override
    void display()
    {
       super.display();
       System.out.println("Company Name:"+cpnm);
       System.out.println("Sector:"+sect);
       System.out.println("No. of employees:"+emp);
       System.out.println("Annual turnover:"+anto);
    }
}

public class JavaApplication12 {
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int a,x;
        System.out.println("Enter the number of students:");
        x=sc.nextInt();
        for(int i=0;i<x;i++)
        {
        System.out.println("Press for details of:");
        System.out.println("1:Student got placement");
        System.out.println("2:Student going for higher studies");
        System.out.println("3:Student going for Entrepreneurship");
        a=sc.nextInt();
        college arr[];
        arr=new college[x];
        switch(a)
        {
            case 1:arr[i]=new placement();
            arr[i].getdata();
            arr[i].display();
                break;
            case 2:arr[i]=new highstudy();
            arr[i].getdata();
            arr[i].display();
                break;
            case 3:arr[i]=new entrepeneur();
            arr[i].getdata();
            arr[i].display();
                break;
            default:System.out.println("Invalid Input");
        }
        }
    }
    
}
