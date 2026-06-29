// Accept 2 numbers from user and perfrom addition on them...

#include <stdio.h>

int main()
{
    int i,j,k;

    // Asking for 1st number from user.
    printf("Enter first number:  \n");
    scanf("%d",&i);

    // Asking for 2nd number from user.
    printf("Enter second number:  \n");
    scanf("%d",&j);

    // Formula
    k = i+j;

    // Printing Result
    printf("Addition of %d and %d is: %d",i,j,k);


    return 0;
}