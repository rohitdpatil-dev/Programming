#include <stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    

    // updater
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit == 4)
        {
            iCount++;
            
        }
        
        
        
        iNo = iNo / 10;
    }

    return iCount;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("Frequueny of 4 in number is : %d",iRet);

    

    return 0;
}