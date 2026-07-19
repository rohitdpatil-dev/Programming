#include <stdio.h>

double SquareMeter(int iNo)
{
    double dAns = 0.0;

    dAns = iNo * 0.0929;



    return dAns;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter the area in square feet: ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("The area in square meter is : %lf",dRet);



    return 0;
}