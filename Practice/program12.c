// Accept a number from user and check whether the number is even or odd using a function.



#include <stdio.h>

void CheckEvenOdd(int iNo)
{
    
    int iRemainder = 0;
    
    iRemainder = iNo % 2;

    if(iRemainder == 0)
    {
        printf("Number  is even.");

    }
    else
    {
        printf("Number is odd.");
    }
}

int main()
{
    int iValue = 0;
   

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);



    return 0;
}