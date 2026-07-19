#include <stdio.h>

int Count(int iNo)
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

        if (iDigit < 6)
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

    iRet = Count(iValue);

    printf("Frequueny of 4 in number is : %d",iRet);

    

    return 0;
}