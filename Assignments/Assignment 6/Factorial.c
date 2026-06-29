#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMult = iMult * iCnt;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iFact = 0;
    
    printf("Enter your number : ");
    scanf("%d",&iValue);

    iFact = Factorial(iValue);

    printf("%d ",iFact);

    return 0;
}