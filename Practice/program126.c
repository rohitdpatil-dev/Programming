#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int Check(int Arr[], int iSize)
{
    
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 0; iCnt<iSize ; iCnt++)
    {
        if(Arr[iCnt]%2 != 0);
        {
            iSum = iSum + Arr[iCnt];
        }
    }

    return iSum;
}

int main()
{
    int iLength = 0;
    int *Brr = NULL;
    int iCnt = 0;
    int iRet = 0;


    //Step 1: Accept the numberof elements from user
    printf("Enter number of elements: ");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elemets: ");
    for(iCnt=0 ; iCnt<iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Check(Brr,iLength);

    printf("Summation of Odd elements is : %d",iRet);

    free(Brr);

    return 0;

}