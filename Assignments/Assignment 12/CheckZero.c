#include <stdio.h>

void CheckZero(int iNo)
{
    int iDigit = 0;
    

    // updater
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit == 0)
        {
            printf("It Contains Zero");
            return;
        }
        
        
        
        iNo = iNo / 10;
    }

    printf("There is no Zero.");

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    CheckZero(iValue);

    

    return 0;
}