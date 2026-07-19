#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iMult = iNo * iCnt;
        printf("%d\t",iMult);
    }
}

int main()
{
    int iValue = 0;
    int iFact = 0;
    
    printf("Enter your number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}