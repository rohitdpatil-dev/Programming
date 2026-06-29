#include<stdio.h>

void DisplayFactor(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = 0; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0 && iCnt % 2 == 0)
        {
            printf("%d",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter your Number: ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}