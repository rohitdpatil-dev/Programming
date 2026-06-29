#include<stdio.h>
typedef int BOOL;

BOOL CheckEvenOdd(int iNo)
{
    if(iNo/2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = 0;

    printf("Enter your Number: ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet = 1)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }


    return 0;
}