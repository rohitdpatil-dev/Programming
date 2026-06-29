// Accept a number from user and check whether the number is even or odd.

/*
    Start
        Accept number as no
        If No is completly divisible by 2 
            then print even
        otherwise 
            print Odd
    Stop

    Start
        Accept number as no
        Divide No by 2
        If Remainder is 0 
            then print as even
        Otherwise
            print as odd
    Stop



*/


#include <stdio.h>

int main()
{
    int iValue = 0;
    int iRemainder = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRemainder = iValue % 2;

    if(iRemainder == 0)
    {
        printf("Number %d is even.",iValue);

    }
    else
    {
        printf("Number %d is odd.",iValue);
    }



    return 0;
}