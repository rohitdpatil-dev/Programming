import java.util.*;


class DivisionFinally
{
    public static void main (String A[])
    {
    Scanner sobj = new Scanner (System.in);
    int No1 = 0, No2 = 0, Ans;

    System.out.println("Enter First number: ");
    No1 = sobj.nextInt();
    
    System.out.println("Enter second number: ");
    No2 = sobj.nextInt();
    
    
    try
    {
        System.out.println("Inside try block");
        Ans = No1/No2;
    }
    catch(ArithematicException eobj)
    {
        System.out.println("Inside generic catch block");
        
    }   
    finally
    {
        System.out.println("finally will always print.");
    }
    
    System.out.println("Division is :" +Ans);
    }


} 
