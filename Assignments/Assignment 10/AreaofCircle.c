#include <stdio.h>

double CircleArea(float fRadius)
{
    float fPI = 0;
    double dArea = 0;  
    fPI = 3.14;

    dArea = fPI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    printf("Enter radius of circle: ");
    scanf("%f",&fValue);

    double dRet = 0.0;
    dRet = CircleArea(fValue);

    printf("Area of circle with radius %.2f is %.2lf.",fValue,dRet);




    return 0;
}