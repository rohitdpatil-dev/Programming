
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    bool bFlag = false;

    
    for (iCnt=0; iCnt < iSize ; iCnt++)
    {
        if (Arr[iCnt]==iNo)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
    

    
}

int main()
{
    int iLength = 0;
    int *Brr = NULL;
    int iCnt = 0;
    bool bRet = 0;
    int iValue = 0;
    


    //Step 1: Accept the numberof elements from user
    printf("Enter number of elements: ");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elemets: ");
    for(iCnt=0 ; iCnt<iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    printf("Enter the element thet u want to search: \n");
    scanf("%d ", &iValue);

    bRet = Check(Brr,iLength, iValue);

    if(bRet = true)
    {
        printf("Present");
    }
    else
    {
        printf("Not present.");
    }

   

    free(Brr);

    return 0;

}

