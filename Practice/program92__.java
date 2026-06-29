// Program on Digits 
// Accept a number from user Reverse it


import java.util.*;

class DigitX
{
    public int ReverseNumber(int iNo)
    {
        int iRev = 0;
        int iDigit = 0;
        while(iNo!=0)
        {
            iDigit = iNo % 10;
           iRev = (iRev * 10) + iDigit;
            
            iNo = iNo / 10;
        }
        return iRev;
    }
}

class program92__
{

    public static void main(String[] args) 
    {
       Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();
       int iValue = 0;
       int iRet = 0;

       System.out.println("Enter number: ");
       iValue = sobj.nextInt();
       iRet = dobj.ReverseNumber(iValue);

       System.err.println("Reverse number is: "+iRet);
       
       
    }
}