#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMult = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMult = iNo * iCnt;
        printf("%d\t",iMult);
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter your number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}