#include<stdio.h>

void Number(int iNo)
{
    if(iNo >= 50 && iNo < 100)
    {
        printf("Medium");
    }

    else if(iNo >= 100)
    {
        printf("Large");
    }

    else
    {
        printf("Small");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter your number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}