#include <stdio.h>
#include <stdlib.h>

int Digit(int Arr[], int iLength)
{
    int iCnt = 0;

    
        for ( iCnt = 1; iCnt < iLength ; iCnt++)
        {
           if (Arr[iCnt] > 99 && Arr[iCnt] < 1000)
           {
            printf("%d\t",Arr[iCnt]);
           }
           
        }

}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    if (iSize <= 0)
    {
        printf("Unable to allocate memory.");
        return -1;
    }

    p = (int*)malloc(iSize*sizeof(int));

    printf("Enter %d elements -->\n",iSize);

    for ( iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter element : ");
        scanf("%d",&p[iCnt]);
    }

    Digit(p,iSize);
        
    free(p);

    return 0;
}