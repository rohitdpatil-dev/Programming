#include <stdio.h>

int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    Difference(p,iSize);

    





    return 0;
}