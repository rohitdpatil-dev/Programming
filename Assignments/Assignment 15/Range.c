#include <stdio.h>
#include <stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    int iCount = 0;
    
        for ( iCnt = 0; iCnt < iLength ; iCnt++)
        {
            if (Arr[iCnt] > iStart && Arr[iCnt] < iEnd )
            {
                printf("%d\t",Arr[iCnt]);
            }
            
        }
    
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iStart = 0;
    int iEnd = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory.");
        return -1;
    }
    
    printf("Enter Start : ");
    scanf("%d",&iStart);
    printf("Enter End : ");
    scanf("%d",&iEnd);

    printf("Enter %d elements -->\n",iSize);

    for ( iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter element : ");
        scanf("%d",&p[iCnt]);
    }

    
    Range(p,iSize,iStart,iEnd);

    
        
    free(p);

    return 0;
}