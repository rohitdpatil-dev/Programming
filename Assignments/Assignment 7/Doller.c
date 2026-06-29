#include<stdio.h>

int Doller(int iNo)
{
    int iMult = iNo * 70;

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter your number : ");
    scanf("%d",&iValue);

    iRet = Doller(iValue);

    printf("%d",iRet);

    return 0;
}