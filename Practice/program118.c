#include <stdio.h>

int Check(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

int main()
{
    int iLength;
    int iCount = 0;
    int iRet;

    printf("Enter number of elements: ");
    scanf("%d", &iLength);

    int Brr[iLength];

    printf("Enter the elements:\n");

    for(iCount = 0; iCount < iLength; iCount++)
    {
        scanf("%d", &Brr[iCount]);
    }

    iRet = Check(Brr, iLength);

    printf("Addition of all elements: %d\n", iRet);

    return 0;
}