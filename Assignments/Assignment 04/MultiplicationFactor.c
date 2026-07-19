#include<stdio.h>

int MultiFact(int iNo)
{
    int iFactor = 0;
    int iMult = 1;

    for(int iFactor = 1; iFactor < iNo; iFactor++)
    {
        if(iNo % iFactor == 0)
        {
            iMult = iFactor * iMult;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter your number: ");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d",iRet);

    return 0;
}