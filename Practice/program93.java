////////////////////////////////////////////////////////////////////////////
//
//                   Pallindrome
//
////////////////////////////////////////////////////////////////////////////                                           
/*

 Program on Digits 
 Accept a number from user Reverse it and if the eversed number is same as iNo then return true   
 
 */              


import java.util.*;

class DigitX
{
    public int CheckPallindrome(int iNo)
    {
        int iRev = 0;
        int iDigit = 0;
        int iTemp = 0;
        
        iTemp = iNo;

        while(iNo!=0)
        {
            iDigit = iNo % 10;
           iRev = (iRev * 10) + iDigit;
            
            iNo = iNo / 10;
        }
        if(iRev == iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program93
{

    public static void main(String[] args) 
    {
       Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();
       int iValue = 0;
       boolean bRet = false;

       System.out.println("Enter number: ");
       iValue = sobj.nextInt();
       bRet = dobj.CheckPallindrome(iValue);

       if(bRet==true)
       {
            System.err.println("Number is Pallindrome.");
       }
       else
        {
            System.err.println("Number is not Pallindrome.");
        }
       
       
    }
}