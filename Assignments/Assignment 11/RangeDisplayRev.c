#include <stdio.h>

void RangeDisplayRev(int iStart, int iEnd) 
{
    if (iStart>iEnd)
    {
        printf("Invalid range");
    }
    
    for (iEnd; iEnd >= iStart ; iEnd--)
    {
        printf("%d ",iEnd);
    }
    
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);
     
    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);
     


    return 0;
}