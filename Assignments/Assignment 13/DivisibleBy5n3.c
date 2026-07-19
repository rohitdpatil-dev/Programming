#include <stdio.h>
#include <stdlib.h>

void DivisibleBy5n(int Arr[], int iLength)
{
    int iCnt = 0;
    
        for ( iCnt = 0; iCnt < iLength; iCnt++)
        {
            if (Arr[iCnt] % 5 == 0 && Arr[iCnt] % 3 == 0)
            {
                printf("%d\t",Arr[iCnt]);
            }
            
        }

}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if (p == NULL)
    {
        printf("Unable to allocate memory.");
        return -1;
    }

    printf("Enter %d elements -->\n",iSize);

    for ( iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter element : ");
        scanf("%d",&p[iCnt]);
    }
    
    DivisibleBy5n3(p,iSize);
    
    free(p);

    return 0;
}