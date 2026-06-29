#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

void Check(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCount = 0;

    
    for (iCnt=0; iCnt < iSize ; iCnt++)
    {
        if (Arr[iCnt]==11)
        {
            iCount++;
        }
    }

    if (iCount>0)
    {
        printf("11 is there in Array!!!");
    }
    else
    {
        printf("11 not found in Array :( ");
    }
    

    
}

int main()
{
    int iLength = 0;
    int *Brr = NULL;
    int iCnt = 0;
    


    //Step 1: Accept the numberof elements from user
    printf("Enter number of elements: ");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elemets: ");
    for(iCnt=0 ; iCnt<iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    Check(Brr,iLength);

   

    free(Brr);

    return 0;

}

