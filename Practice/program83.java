// Program to count No. of Digits in Number


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
            icount++;
            iNo = iNo / 10;
        }
        return 0;
    }
}

class program83
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

       System.err.println("Number of Digits are: "+iRet);
       
       
    }
}