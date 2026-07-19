#include <stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;
    
    // updater
    if (iNo<0)
    {
        printf("Entered number is negative. Converted to positive.");

        iNo = -iNo;
    }
    

   while(iNo != 0)
    {
        iDigit = iNo % 10;
        

        iMult = iDigit * iMult;
        
        iNo = iNo/10;
        
        
    }

    return iMult; 
    
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter your number: ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of all digits in number is : %d",iRet);



    return 0;
}