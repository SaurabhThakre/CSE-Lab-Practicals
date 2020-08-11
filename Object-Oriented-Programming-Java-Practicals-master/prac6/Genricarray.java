package genricarray;

public class Genricarray {
    
    public static <T extends Number> void sumarray(T[] arr)
    {
        double sum = 0;
        System.out.println("Array:");
        for(T e : arr)
        {
            System.out.print(e+"\t"); 
        }
        System.out.println("");
        System.out.println("Sum of Array:");
        for(int i=0; i<arr.length; i++)
        {
             sum=sum+arr[i].doubleValue();
        }
        System.out.print(sum);
    }

    @SuppressWarnings("empty-statement")
    public static void main(String[] args) {
        
        Integer[] array = {1,2,3,4,5,6};
        sumarray(array);
        System.out.println("");
        Double[] array1 = {1.1,2.1,3.1,4.1,5.1,6.1};
        sumarray(array1);
        System.out.println("");
        Float[] array2 = {0.1f,0.2f,0.3f,0.4f,0.5f,0.6f};
        sumarray(array2);
        System.out.println("");
    }
    
}
