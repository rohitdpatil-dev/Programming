// Accept a number from user and check whether the number is even or odd using a function.



#include <stdio.h>

int CheckEvenOdd(int iNo)
{
    
    int iRemainder = 0;
    
    
    iRemainder = iNo % 2;

    return iRemainder;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Numbe to check whether the number is Even or Odd:  ");
    scanf("%d",&iValue);

    iRet = (iValue);

    if (iRet == 0)
    {
        printf("%d is Even\n",iValue);
    }
    else
    {
        printf("%d is Odd\n",iValue);
    }



    return 0;
}