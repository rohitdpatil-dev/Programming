#include <stdio.h>
#include <stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum = 0;
    int iDigit = 0;

    
        for ( iCnt = 0; iCnt < iLength ; iCnt++)
        {
           do
           {
            iDigit = Arr[iCnt] % 10;
            iSum += iDigit;
            Arr[iCnt] = Arr[iCnt] / 10;
        } while (iDigit != 0);
        
        printf("%d\t",iSum);

        iSum = 0;

        }

}

int main()
{
    // Variable Declaration
    int iSize = 0;
    int iCnt = 0;
    int *p = NULL;

    // Accept number of elements
    printf("-------------------------------------------------\n");
    printf("        Digits Sum of Each Array Element\n");
    printf("-------------------------------------------------\n");

    printf("Enter Number of Elements : ");
    scanf("%d",&iSize);

    // Validate input
    if(iSize <= 0)
    {
        printf("Invalid Input\n");
        return -1;
    }

    // Allocate memory dynamically
    p = (int *)malloc(iSize * sizeof(int));

    // Check whether memory allocation is successful
    if(p == NULL)
    {
        printf("Unable to Allocate Memory\n");
        return -1;
    }

    // Accept array elements
    printf("\nEnter %d Elements\n",iSize);
    printf("-------------------------\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    // Display Result
    printf("\nSum of Digits of Each Element :\n");
    DigitsSum(p,iSize);

    // Deallocate memory
    free(p);

    return 0;
}