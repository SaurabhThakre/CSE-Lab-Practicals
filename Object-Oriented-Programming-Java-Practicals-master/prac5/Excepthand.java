
package excepthand;

import java.util.Scanner;
import java.util.regex.*;

class myException extends Exception
{
    myException(String s)
    {
        super(s);
    }
}

public class Excepthand {
    
    static void valid(String i) throws myException
    {
        Pattern p=Pattern.compile("[A-Z]"),q=Pattern.compile("[a-z]"),r=Pattern.compile("[0-9]");
        Pattern s=Pattern.compile("[^a-zA-Z0-9]");
        Matcher m=p.matcher(i),n=q.matcher(i),o=r.matcher(i),t=s.matcher(i);
        if(i.length()<8)
        {
            throw new myException("Minimum length should be 8");
        }
        else if(!m.find())
        {
            throw new myException("Enter at least 1 UpperCase");
        }
        else if(!n.find())
        {
            throw new myException("Enter at least 1 LowerCase");
        }
        else if(!o.find())
        {
            throw new myException("Enter at least 1 LowerCase");
        }
        else if(!t.find())
        {
            throw new myException("Enter at least 1 Special Character");
        }
    }
    
    
    static void mobile(String i) throws myException
    {
        Pattern p1=Pattern.compile("[^0-9]");
        Matcher m1=p1.matcher(i);
        if(i.length()!=10)
        {
            throw new myException("Invalid Length of Mobile Number");
        }
        else if(m1.find())
        {
            throw new myException("Invalid Mobile Number");
        }
    }
    
    
    static void address(String i) throws myException
    {
        Pattern p2=Pattern.compile("\\w+\\@{1}+[a-z]+\\.{1}+[a-z]");
        Matcher m2=p2.matcher(i);
        if(!m2.find())
        {
            throw new myException("Invalid Email Address");
        }
        
    }
    
    
    public static void main(String[] args) {
        
        int e,f,g;
        
        Scanner sc=new Scanner(System.in);
        String name,password,number,email;
        
        System.out.println("Enter the following details to Register");
        System.out.println("Username:");
        name=sc.next();
        
        do{
        System.out.println("Password:");
        try
        {
            e=0;
            password=sc.next();
            valid(password);
        }
        catch (myException my)
        {
            System.out.println(my);
            System.out.println("Try Again");
            e=1;
        }
        }while(e!=0);
        
        
        System.out.println("Email:");
        do{
        try
        {
            email=sc.next();
            address(email);
            f=0;
        }
        catch (myException my)
        {
            System.out.println(my);
            System.out.println("Try Again");
            f=1;
        }
        }while(f!=0);
        
        
        System.out.println("Mobile Number:");
        do{
        try
        {
            number=sc.next();
            mobile(number);
            g=0;
        }
        catch (myException my)
        {
            System.out.println(my);
            System.out.println("Try Again");
            g=1;
        }
        }while(g!=0);
        
        
        System.out.println("Registration Completed Successfully");
        
    }
    
}
