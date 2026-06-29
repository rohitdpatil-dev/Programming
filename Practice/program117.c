#include <stdio.h>

void Display(int Arr[],int iSize)
{
    int iCnt = 0;
    
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
    printf("%d\n",Arr[iCnt]);
    }
    

}

int main()
{
    int iLength = 4;
    int iCount = 0;


    int Brr[iLength];            

    printf("Enter the elements: %d\n",Brr[iCount]);

    for(iCount=0; iCount<iLength; iCount++)
    {

        scanf("%d\n",&Brr[iCount]);
    }
    
   
    Display(Brr,iLength);


    
    
    return 0;
}