import java.util.*;


class ArrayIndexException {
    public static void main (String A[]){
    Scanner sobj = new Scanner (System.in);

    int Arr[] = {11,21,51,101,111};

    System.out.println("Enter the index of Array: ");
    int Index = sobj.nextInt();
    try
    {
         System.err.println("Element ");
         System.err.println("Element at that index is : "+Arr[Index]);
    }
    catch(java.lang.ArrayIndexOutOfBoundsException aobj)
    {
        System.out.println("Exception occured :"+aobj);
    }
        System.out.println("End of Application");
    
    
    
}
} 
