#include <stdio.h>

float FtoC(float fFahrenheit)
{
    float fCelcius = 0.0;

    fCelcius = (fFahrenheit - 32) * (5.0/9.0);
    
    return fCelcius;
}

int main()

{
    float fValue = 0.0;
    
    float fRet = 0.0;

    printf("Enter temperature in fahrenheit : ");
    scanf("%f",&fValue);
    

    fRet = FtoC(fValue);

    printf("Conversion of %.2f Fahrenheit to Celcius is %.fC.",fValue,fRet);







    return 0 ;
}