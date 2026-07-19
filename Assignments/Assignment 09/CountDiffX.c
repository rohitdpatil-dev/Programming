#include <stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;
    int iDiff = 0;

    if (iNo<0)
    {
        printf("Entered number is negative. Converted to positive.");

        iNo = -iNo;
    }
    
   while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if (iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }

        else
        {
            iOddSum += iDigit;
        }
           
        iNo = iNo/10;
           
    }

    iDiff = iEvenSum - iOddSum;

    return iDiff; 
       
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter your number: ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Difference between Sum of even and odd digits are : %d",iRet);



    return 0;
}