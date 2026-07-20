#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin = 0;
    int iMax = 0;

    iMax = Arr[0];
    iMin = Arr[0];
    
    
        for ( iCnt = 1; iCnt < iLength ; iCnt++)
        {
            if (Arr[iCnt] > iMax)
            {
                iMax = Arr[iCnt];
            }

            if (Arr[iCnt] < iMin)
            {
                iMin = Arr[iCnt];
            }
            
            
            
           
                
        }

        
    return iMax-iMin;
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


    
    iRet = Difference(p,iSize);

    printf("Difference is : %d",iRet);
        
    free(p);

    return 0;
}