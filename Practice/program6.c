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
    float i = 0.0f, j = 0.0f, k = 0.0f;

    printf("Enter first number: \n");
    scanf("%f",&i);

    printf("Enter second number: \n");
    scanf("%f",&j);

    k = i + j;

    printf("Addition of %f and %f is: %f",i,j,k);

    return 0;
}
