#include <stdio.h>

int RangeDisplay(int iStart, int iEnd) 
{
    
    int iSum = 0;
    int i = 0;

    for (i = iStart; i <= iEnd ; i++)
    {    
        iSum = iSum + i;   
    }

    return iSum;
    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);
     
    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    iRet = RangeDisplay(iValue1,iValue2);

    if (iRet<=0)
    {
        printf("Invalid range");
    }
    else
    {
        printf("Sum of all numbers in between range is : %d",iRet);
    }
    

    
     


    return 0;
}