#include <stdio.h>

double RectangleArea(float fHeight, float fWidth)
{
    double dArea = 0.0;

    dArea = fHeight * fWidth;
    
    return dArea;
}

int main()

{
    float fValueh = 0.0;
    float fValuew = 0.0;
    double dRet = 0.0;

    printf("Enter height of rectangle: ");
    scanf("%f",&fValueh);
    printf("Enter width of rectangle: ");
    scanf("%f",&fValuew);

    dRet = RectangleArea(fValueh,fValuew);

    printf("Area f rectangle with Height (%.2f) and Width (%.2f) is %.3lf .",fValueh,fValuew,dRet);







    return 0 ;
}