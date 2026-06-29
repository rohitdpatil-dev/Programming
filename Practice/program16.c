// Accept a number from user and check whether the number is even or odd using a function.



#include <stdio.h>
#include <stdbool.h>

bool CheckEvenOdd(int iNo)
{
    

    if ((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number to check whether the number is Even or Odd:  ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if (bRet == true)
    {
        printf("%d is Even\n",iValue);
    }
    else
    {
        printf("%d is Odd\n",iValue);
    }



    return 0;
}