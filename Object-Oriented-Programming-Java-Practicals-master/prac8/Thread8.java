package thread8;

import java.util.*;
import java.io.*;
import static java.lang.System.exit;

class Cricket implements Serializable
{

    int run,ball,wicket;
    Cricket(int r,int b,int w)
    {
        run=r;
        ball=b;
        wicket=w;
    }
    public int getRun()
    {
        return run;
    }
    public int getBall()
    {
        return ball;
    }
    public int getWicket()
    {
        return wicket;
    }

}
class Server extends Thread
{
    public synchronized void run(Cricket c)
    {
        try{
            System.out.println("Server is running");
            ObjectOutputStream o = new ObjectOutputStream(new FileOutputStream("cricbuzz.txt"));
            o.writeObject(c);
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}
class Client extends Thread
{
    public synchronized void run()
    {
        try{
            System.out.print("is running");
            System.out.println("");
            ObjectInputStream i = new ObjectInputStream(new FileInputStream("cricbuzz.txt"));
            Cricket c = (Cricket) i.readObject();
            System.out.println("Runs:"+c.getRun()+", Balls:"+c.getBall()+", Wickets:"+c.getWicket());
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}

public class Thread8 {
    
    public static void main(String[] args) {
        
        int a,r,b,w;
        Scanner sc = new Scanner(System.in);
        do{
            System.out.println("Press for\n1:Server\t2:Clients\t0:Exit");
            a = sc.nextInt();
            switch(a)
            {
                case 1:
                    System.out.println("Enter Runs,Balls,Wicket:");
                    r = sc.nextInt();
                    b = sc.nextInt();
                    w = sc.nextInt();
                    Cricket t = new Cricket(r,b,w);
                    Server t1 = new Server();
                    t1.run(t);
                break;
                case 2:
                    System.out.print("Client1 ");
                    Client t2 = new Client();
                    t2.run();
                    System.out.print("Client2 ");
                    Client t3 = new Client();
                    t3.run();
                break;
                case 0:exit(0);
                break;
                default:System.out.println("Invalid Input");
            }
        }while(a!=0);
    }
    
}