////////////////////////////////////////////////////////////////////////////////////////////////
//
// Accept n numbers from user and return the largest value from those numbers.
//
////////////////////////////////////////////////////////////////////////////////////////////////

// Time complity : O(n)


#include <stdio.h>
#include <stdlib.h>



int Minimum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = 0;

    iMax = Arr[0];
    
    
    for (iCnt=0; iCnt < iSize ; iCnt++)
    {
        if (Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
    

    
}

int main()
{
    int iLength = 0;
    int *Brr = NULL;
    int iCnt = 0;
    int iRet = 0;
    
    


    //Step 1: Accept the number of elements from user
    printf("Enter number of elements: ");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elemets: \n");
    for(iCnt=0 ; iCnt<iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    

    iRet = Minimum(Brr,iLength);

    
   printf("Largest number is %d",iRet);

    free(Brr);

    return 0;

}

