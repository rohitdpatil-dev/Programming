#include <stdio.h>
#include <stdlib.h>

int Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    
        for ( iCnt = 0; iCnt < iLength; iCnt++)
        {
            if (Arr[iCnt] == iNo )
            {
                iCount++;
            }
            
        }
    
    return iCount;

}

int main()
{
    int iSize = 0;
    int iCnt = 0;
    int iValue = 0;
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
    
    printf("Enter NO : ");
    scanf("%d",&iValue);

    printf("Enter %d elements -->\n",iSize);

    for ( iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter element : ");
        scanf("%d",&p[iCnt]);
    }

    
    iRet = Check(p,iSize,iValue);

    if (iRet > 0)
    {
        printf("%d is present.",iValue);

    }
    else
    {
        printf("%d is absent.",iValue);
    }
        
    free(p);

    return 0;
}