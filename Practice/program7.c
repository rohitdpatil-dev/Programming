#include <stdio.h>

int main()
{
    float fValue1 =0.0f;            // To store first input
    float fValue2 =0.0f;            // To store second input
    float fRseult =0.0f;            // To store result

    printf("Enter first number: \n");
    scanf("%f",&fValue1);

    printf("Enter second number: \n");
    scanf("%f",&fValue2);

    fRseult = fValue1 + fValue2;            // Perform the addition

    printf("Addition of %f and %f is: %f",fValue1,fValue2,fRseult);

    return 0;
}