// Program to Count odd and even digits in a number.


import java.util.*;

class DigitX
{
    public void CountEvenOddDigits(int iNo)
    {
        int iCountEven = 0;
        int iCountOdd = 0;
        int iDigit = 0;
        while(iNo!=0)
        {
            iDigit = iNo % 2;
            if(iDigit!=0)
            {
                iCountOdd++;
            }

            else
            {
                iCountEven++;
            }
            
            iNo = iNo / 10;
        }
       
        
        System.out.println("Number of even digits in number: "+iCountEven);
        System.out.println("Number of odd digits in number: "+iCountOdd);
    }
}

class program88__
{

    public static void main(String[] args) 
    {
       Scanner sobj = new Scanner(System.in);
        DigitX dobj = new DigitX();
       int iValue = 0;
       

       System.out.println("Enter number: ");
       iValue = sobj.nextInt();
       dobj.CountEvenOddDigits(iValue);

       
       
       
    }
}