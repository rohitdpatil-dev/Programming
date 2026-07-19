#include <stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if (iNo<0)
    {
        printf("Entered number is negative. Converted to positive.");

        iNo = -iNo;
    }
    

   while(iNo != 0)
    {
        iDigit = iNo % 10;
        

        if (iDigit > 3 && iDigit < 7)
        {
            iCount++;
        }
        
        iNo = iNo/10;
        
        
    }

    return iCount; 
    
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter your number: ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("No. of digits between 3 and 7 are : %d",iRet);



    return 0;
}