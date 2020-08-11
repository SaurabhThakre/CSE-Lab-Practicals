package interfacexy;

import static java.lang.System.exit;
import java.util.Scanner;
import java.util.Random;

 class Bankacc
    {
        String ownm;
        int adhno;
        int year;
        int accno,accno1;
        double inter,bal,roi;
        Scanner sc=new Scanner(System.in);
        Random rand =new Random();
        int r1 = rand.nextInt(1000);
        
        void openacc()
        {
            System.out.println("Enter Aadhar Card No.:");
            adhno=sc.nextInt();
            System.out.println("Enter owner name:");
            ownm=sc.next();
            System.out.println("Enter Balance:");
            bal=sc.nextDouble();
            System.out.println("Enter Year:");
            year=sc.nextInt();
        }
        
        void display()
        {
            System.out.println("Owner name:"+ownm);
            System.out.println("Aadhar Card No.:"+adhno);
            System.out.println("Balance:"+bal);
        }
        
        void deposit(double amt)
        {
            bal=bal+amt;
        }
        
        void closeacc()
        {
            System.out.println("Account Has been deleted");
        }
        
        void updateint()
        {
           inter =(bal*roi*year)/100;
           bal=bal+inter;
        }
        
        
   }


   class fixedacc extends Bankacc
   {
       int lockinperiod;
        Scanner x=new Scanner(System.in);
        @Override
        void openacc()
        {
        super.openacc();
        System.out.println("Enter Lock in period:");
        lockinperiod=x.nextInt();
        accno =55000+r1;
        if(year <=2 && year>=1)
        {
            roi=6;
        }
        else if(year<=5 && year>2)
        {
            roi=6.5;
        }
        else if(year>5)
        {
            roi=7;
        }
        }
        @Override
        void updateint()
        {
           inter = (bal*roi*year)/100;
           bal=bal+inter;
        }
        @Override
        void closeacc()
        {
            if(year<lockinperiod)
            {
                bal=bal-(0.05*bal);
                System.out.println("----------------------------------------------------");
                System.out.println("5% Amount has been deducted from your Account and\nremaining balance is:"+bal);
                super.closeacc();
                System.out.println("----------------------------------------------------");
            }
            else
            {
                System.out.println("----------------------------------------------------");
                super.closeacc();
                System.out.println("----------------------------------------------------");
            }
                
        }
        
        @Override
        void display()
        {
        System.out.println("Account No.:"+accno);
        super.display();
        System.out.println("Lock in Period:"+lockinperiod);
        }
        
   }


interface Debitable
{
    public void withdrawal(double amt);
}


    class savingacc extends Bankacc implements Debitable
    {
        
        @Override
        void openacc()
        {
        super.openacc();
        accno1 =11000+r1;
        roi=4;
        }
        
        @Override
        void display()
        {
        System.out.println("Account No.:"+accno1);
        super.display();
        }
        
        @Override
        public void withdrawal(double amt)
        {
            bal=bal-amt;
        }

    }

public class Interfacexy {
    
public static void main(String[] args) {
    
    int a,x=10,b,y=0,z=0,s=0,i=0,j=0;
    double d;
    Scanner sc=new Scanner(System.in);
    while(s==0)
    {
    System.out.println("Press for:");
    System.out.println("1:Fixed Account");
    System.out.println("2:Saving Account");
    System.out.println("0:Exit");
    a=sc.nextInt();
    fixedacc fix[];
    fix = new fixedacc[x];
    savingacc save[];
    save = new savingacc[x];
    switch(a)
    {
        case 1:fix[i]= new fixedacc();
        fix[i].openacc();
        do{
            System.out.println("Press for:");
            System.out.println("1:Deposit\t\t3:Close Account");
            System.out.println("2:Update Interest\t0:Exit");
        b=sc.nextInt();
        switch(b)
        {
            case 1:System.out.println("Enter Amount to be deposited:");
            d=sc.nextDouble();
            fix[i].deposit(d);
            break;
            case 2:fix[i].updateint();
            break;
            case 3:fix[i].closeacc();
            y=1;
            break;
            case 0:break;
            default:System.out.println("Invalid Input");
        }
        }while(b!=0);
        if(y==1)
        {
        i++;
        break;
        }
        System.out.println("----------------------------------------------------");
        fix[i].display();
        System.out.println("----------------------------------------------------");
        i++;
        break;
        
        case 2:save[j]=new savingacc();
        save[j].openacc();
        do{
            System.out.println("Press for:");
            System.out.println("1:Deposit\t\t3:Close Account");
            System.out.println("2:Update Interest\t4:Withdraw");
            System.out.println("0:Exit");
        b=sc.nextInt();
        switch(b)
        {
            case 1:System.out.println("Enter Amount to be deposited:");
            d=sc.nextDouble();
            save[j].deposit(d);
            break;
            case 2:save[j].updateint();
            break;
            case 3:System.out.println("----------------------------------------------------");
            save[j].closeacc();
            System.out.println("----------------------------------------------------");
            z=1;
            break;
            case 4:System.out.println("Enter Amount to be withdrawn:");
            d=sc.nextDouble();
            save[j].withdrawal(d);
            break;
            case 0:break;
            default:System.out.println("Invalid Input");
        }
        }while(b!=0);
        if(z==1)
        {
        j++;
        break;
        }
        System.out.println("----------------------------------------------------");
        save[j].display();
        System.out.println("----------------------------------------------------");
        j++;
        break;
        
        case 0:exit(0);
        break;
        default:System.out.println("Invalid Input");
    }
    }
 }
    
}


