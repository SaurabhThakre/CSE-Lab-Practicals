package javaapplication1;

import static java.lang.Math.*;
import java.util.Scanner;

class point
{
    int x,y;
    point()
    {
        x=y=0;
        System.out.println("(x,y)=("+x+","+y+")");
    }
    point(int a,int b)
    {
        x=a; y=b;
        System.out.println("(x,y)=("+x+","+y+")");
    }
    double getlength(point p1,point p2)
    {
        double z,len,c,i,j;
        c = 2;
        i=(p2.x-p1.x);
        j=(p2.y-p1.y);
        z=pow(i,c)+pow(j,c);
        len=sqrt(z);
        return len;
    }
}

class shape
{
    Scanner sc=new Scanner(System.in);
    point p[];
    void getdetail()
    {
        System.out.println("Enter the name of 2D shape:");
        String name=sc.nextLine();
        System.out.println("Enter the no. of vertices:");
        int v= sc.nextInt();
        System.out.println("Enter the cordinates of "+v+" vertices:");
        p=new point[v];
        int a,b;
        for(int i=0;i<p.length;i++)
        {
            a=sc.nextInt();
            b=sc.nextInt();
            p[i]=new point(a,b);
        }
    }
    double getperimeter()
    {
        double peri = 0;
        for(int i=0;i<p.length-1;i++)
        {
            peri=peri+p[i].getlength(p[i],p[i+1]);
        }
        return peri;
    }
    
}

public class JavaApplication1 {
    
    public static void main(String[] args) {
        
        point p1,p2;
        shape sh;
        double l,pm;
        p1=new point();
        p2=new point(7,8);
        l=p1.getlength(p1,p2);
        System.out.println("Distance between two point:"+l);
        sh=new shape();
        sh.getdetail();
        pm=sh.getperimeter();
        System.out.println("Perimeter of the shape:"+pm);
    } 
}
