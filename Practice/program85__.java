// Program to count Frequency of 7 in Number


import java.util.*;

class DigitX
{
    public int CountDigits(int iNo)
    {
        int icount = 0;
        int iDigit = 0;
        while(iNo!=0)
        {
            iDigit = iNo % 10;
            if(iDigit==7)
            {
                icount++;
            }
            
            iNo = iNo / 10;
        }
        return icount;
    }
}

class program85__
{

    public static void main(String[] args) 
    {
       Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();
       int iValue = 0;
       int iRet = 0;

       System.out.println("Enter number: ");
       iValue = sobj.nextInt();
       iRet = dobj.CountDigits(iValue);

       System.err.println("Frequency of 7 in Number is: "+iRet);
       
       
    }
}