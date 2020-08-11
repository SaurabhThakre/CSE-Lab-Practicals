package collection;

import static java.lang.System.exit;
import java.util.*;

class Student
{
    String name,city,contact;
    String age,roll,semester;
    public Student(String n,String c,String ct,String a,String r,String s)
    {
        name = n;
        roll = r;
        age = a;
        semester = s;
        city = c;
        contact = ct;
    }
    String getCity()
    {
        return city;
    }
    String getRoll()
    {
        return roll;
    }
    String getSem()
    {
        return semester;
    }
    @Override
    public String toString()
    {
        return"Name:"+name+"\tRoll No.:"+roll+"\tSemester:"+semester+"\tAge:"+age+"\tContact:"+contact+"\tCity:"+city;
    }
}

class myException extends Exception
{
    myException(String s)
    {
        super(s);
    }
}

class nameCompare implements Comparator<Student>
{
    public int compare(Student s1,Student s2)
    {
        if(s1.getSem().compareTo(s2.getSem())==0)
            return s1.getRoll().compareTo(s2.getRoll());
        else
            return s1.getSem().compareTo(s2.getSem());
    }
}


public class Collection {

    
    public static void main(String[] args) throws Exception {
        
        Scanner sc = new Scanner(System.in);
        int i,a,x;
        String name,city,contact;
        String age,roll,semester;
        String input;
        ArrayList <Student> list = new ArrayList<Student>();
        do{
            System.out.println("Press for:\n1:Add Details\t2:Remove Details\t3:Sort\t4:Display Citywise\t0:Exit");
            a = sc.nextInt();
            switch(a)
            {
                case 1:System.out.println("Enter Name,City,Contact,Age,Roll No.,Semester:");
                    name = sc.next();
                    city = sc.next();
                    contact = sc.next();
                    age = sc.next();
                    roll = sc.next();
                    semester = sc.next();
                    try{
                    if(name.equalsIgnoreCase("null")||city.equalsIgnoreCase("null")||contact.equalsIgnoreCase("null")||age.equalsIgnoreCase("null")||roll.equalsIgnoreCase("null")||semester.equalsIgnoreCase("null"))
                    {
                        valid1();
                    }
                    }
                    catch(myException me)
                    {
                    System.out.println(me);
                    break;
                    }
                    list.add(new Student(name,city,contact,age,roll,semester));
                    Iterator itr = list.iterator();
                    while(itr.hasNext())
                    {
                        System.out.println(itr.next());
                    }
                    break;
                    
                case 2:
                    try{
                    if(list.isEmpty())
                    {
                        valid();
                    }
                    }
                    catch(myException me)
                    {
                    System.out.println(me);
                    break;
                    }
                    System.out.println("Enter index of information you want to remove:");
                    x=sc.nextInt();
                    list.remove(x);
                    Iterator itr1 = list.iterator();
                    while(itr1.hasNext())
                    {
                        System.out.println(itr1.next());
                    }
                    break;
                    
                case 3:
                    try{
                    if(list.isEmpty())
                    {
                        valid();
                    }
                    }
                    catch(myException me)
                    {
                    System.out.println(me);
                    break;
                    }
                    nameCompare nc = new nameCompare();
                    Collections.sort(list,nc);
                    Iterator itr2 = list.iterator();
                    while(itr2.hasNext())
                    {
                        System.out.println(itr2.next());
                    }
                    break;
                    
                case 4:
                    try{
                    if(list.isEmpty())
                    {
                        valid();
                    }
                    }
                    catch(myException me)
                    {
                    System.out.println(me);
                    break;
                    }
                    System.out.print("Enter the name of city:");
                    input = sc.next();
                    Iterator itr3 = list.iterator();
                    while(itr3.hasNext())
                    {
                        Student s = (Student)itr3.next();
                        if(s.city.equals(input))
                        {
                            System.out.println("Name:"+s.name+"\tRoll No.:"+s.roll+"\tSemester:"+s.semester+"\tAge:"+s.age+"\tContact:"+s.contact+"\tCity:"+s.city);
                        }
                    }
                    break;
                    
                case 0:
                    exit(0);
                    break;
                    
                default:System.out.println("Invalid Input");
            }
            
        }while(a!=0);
        
        
    }
        
        static void valid() throws Exception
        {
            throw new myException("ArrayList is Empty");
        }
        
        static void valid1() throws Exception
        {
            throw new myException("Some Data is Missing");
        }
        
    
}