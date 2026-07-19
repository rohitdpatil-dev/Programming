#include <stdio.h>

void RangeDisplay(int iStart, int iEnd) 
{
    for (iStart; iStart <= iEnd ; iStart++)
    {
        if (iStart%2 == 0)
        {
            printf("%d ",iStart);    
        }
        
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

    RangeDisplay(iValue1,iValue2);
     


    return 0;
}