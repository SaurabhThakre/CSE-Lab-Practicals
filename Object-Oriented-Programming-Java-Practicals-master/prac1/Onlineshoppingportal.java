/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package onlineshoppingportal;

import java.util.Scanner;

/**
 *
 * @author rcoem
 */
public class Onlineshoppingportal {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Onlineshoppingportal pr = new Onlineshoppingportal();
       Scanner sc = new Scanner(System.in);
       System.out.println("Name of Customer:");
       String n=sc.next();
       System.out.println("Enter the cart value:");
       int c=sc.nextInt();
       System.out.println("Press for:\n1:Prime customer\n2:Regular Customer");
       int p=sc.nextInt();
       if(p==1)
       {
           pr.prime(n,c);
       }
       else if(p==2)
       {
           System.out.println("Enter the promo code");
           String pc=sc.next();
           pr.regular(n,c,pc);
       }
       else
       { 
           System.out.println("incorrect input");
       }
               
    }
    
    private void prime(String n,int c)
    {
        double d;
        System.out.println("Hello "+n);
        if(c>1000)
        {
            System.out.println("Original cart value:"+c);
            d=c-c*0.3;
            System.out.println("Cart value after discount:"+d);
        }
        else
        {
            System.out.println("Original cart value:"+c );
            d=c-c*0.2;
            System.out.println("Cart value after discount:"+d);
        }
    }
    private void regular(String n,int c,String pc)
    {
        double dd;
         System.out.println("Hello "+n);
         if("get10".equals(pc))
         {
         System.out.println("Original cart value:"+c );
            if(c>500)
            {
                dd=c-c*0.1;
                System.out.println("Cart value after discount:"+dd);
            }
            else
            {
                dd=c-10;
                System.out.println("Cart value after discount:"+dd);
            }
         }
         else
         {
            System.out.println("Invalid Promocode,No discout applicable");
            System.out.println("Cart value to be paid:"+c );
         }
    }

  
    
}
