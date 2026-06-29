#include<stdio.h>

int Display(int iNo)
{
    int iCnt = 0;
    int iMult1 = 1;
    int iMult2 = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iMult1 = iMult1 * iCnt;
        }

        if(iCnt % 2 != 0)
        {
            iMult2 = iMult2 * iCnt;
        }
    }
    return iMult1 - iMult2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter your number : ");
    scanf("%d",&iValue);

    iRet = Display(iValue);

    printf("%d",iRet);

    return 0;
}