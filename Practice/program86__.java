// Program to Count even digits in a number.


import java.util.*;

class DigitX
{
    public int CountEvenDigits(int iNo)
    {
        int icount = 0;
        int iDigit = 0;
        while(iNo!=0)
        {
            iDigit = iNo % 2;
            if(iDigit==0)
            {
                icount++;
            }
            
            iNo = iNo / 10;
        }
        return icount;
    }
}

class program86__
{

    public static void main(String[] args) 
    {
       Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();
       int iValue = 0;
       int iRet = 0;

       System.out.println("Enter number: ");
       iValue = sobj.nextInt();
       iRet = dobj.CountEvenDigits(iValue);

       System.err.println("No.of Even Digits are: "+iRet);
       
       
    }
}