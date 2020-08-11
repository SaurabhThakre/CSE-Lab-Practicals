package genricclass;

import static java.lang.System.exit;
import java.util.Arrays;
import java.util.Scanner;

class Queue<T>
{
    private T[] quearr;
    private int size,i,front,rear;
    
    public Queue(int n)
    {
        size = n;
        quearr = (T[]) new Object[size];
        i = 0;
        front = -1;
        rear = -1;
    }
    
    public void add(T item) throws FullExcept
    {
        if(i == quearr.length)
        {
            throw new FullExcept("Queue is Full.");
        }
        else
        {
            rear = (rear + 1)%quearr.length;
            quearr[rear]=item;
            i++;
            if(front == -1)
            {
                front = rear;
            }
        }
    }
    
    public T delete() throws EmptyExcept
    {
        T delitem;
        if(i == 0)
        {
        throw new EmptyExcept("Queue is Empty.");
        }
        else
        {
            delitem = quearr[front];
            quearr[front] = null;
            front = (front + 1)%quearr.length;
            i--;
        }
        return delitem;
    }
    
    public String toString()
    {
        return "CircularQueue" + Arrays.toString(quearr);
    }
}

class FullExcept extends Exception
{
    public FullExcept()
    {
        super();
    }
    public FullExcept(String message)
    {
        super(message);
    }
}

class EmptyExcept extends Exception
{
    public EmptyExcept()
    {
        super();
    }
    public EmptyExcept(String message)
    {
        super(message);
    }
}

public class Genricclass {


    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int x,a,n;
        System.out.print("Enter size of circular queue:");
        n = sc.nextInt();
        Queue<Integer> cque = new Queue(n);
        do{
            System.out.println("Press for\t1:Add element\t2:Delete Element\t0:Exit");
        a = sc.nextInt();
        switch(a)
        {
            case 1: System.out.print("Enter:");
                x = sc.nextInt();
                try
                {cque.add(x);}
                catch(FullExcept fe)
                {System.out.println(fe);}
                System.out.println("Circular Queue:" + cque);
            break;
            case 2:try
                {cque.delete();}
                catch(EmptyExcept ee)
                {System.out.println(ee);}
                System.out.println("Circular Queue:" + cque);
            break;
            case 0:exit(0);
            
            default:System.out.println("Invalid Input");
        
        }
        }while(a!=0);
    }
    
}
