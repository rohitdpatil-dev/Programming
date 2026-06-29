/*
Algorithm

Strat
    Accept first number as no1
    Accept first number as no2
    Perfrom addition of no1 and no2
    Display result

Stop
*/

#include <stdio.h>

int main()
{
    float i,j,k;

    printf("Enter first number: ");
    scanf("%f",&i);

    printf("Enter second number: ");
    scanf("%f",&j);

    k = i + j;

    printf("Addition of %f and %f is: %f",i,j,k);

    return 0;
}


// here we had not initialized variables while declaring