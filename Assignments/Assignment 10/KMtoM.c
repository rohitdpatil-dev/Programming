#include <stdio.h>

double RectangleArea(float fKM)
{
    double dMeter = 0.0;

    dMeter = fKM * 1000;
    
    return dMeter;
}

int main()

{
    float fValue = 0.0;
    
    double dRet = 0.0;

    printf("Enter distance in KM : ");
    scanf("%f",&fValue);
    

    dRet = RectangleArea(fValue);

    printf("Conversion of %.2f KM to meter is %.2lfm.",fValue,dRet);







    return 0 ;
}