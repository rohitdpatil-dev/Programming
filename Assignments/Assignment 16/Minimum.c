#include <stdio.h>
#include <stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = 0;
    iMin = Arr[iCnt];
    
        do
        {
            if (iMin > Arr[iCnt])
            {
                iMin = Arr[iCnt];
            }
            
            iCnt++;
        } while (iCnt < iLength);
        
    
    return iMin;
}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if (iSize == 0)
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


    
    iRet = Minimum(p,iSize);

    printf("Smallest element is : %d",iRet);
        
    free(p);

    return 0;
}