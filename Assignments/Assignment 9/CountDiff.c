#include <stdio.h>

int SumEven(int iNo)
{
    int iDigit = 0;
    int iESum = 0;

    if (iNo<0)
    {
        printf("Entered number is negative. Converted to positive.");

        iNo = -iNo;
    }
    

   while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if (iDigit % 2 == 0)
        {
            iESum = iESum + iDigit;
        }
        
        
        iNo = iNo/10;
        
        
    }

    return iESum; 
    
    
}

int SumOdd(int iNo)
{
    int iDigit = 0;
    int iOSum = 0;

    if (iNo<0)
    {
        printf("Entered number is negative. Converted to positive.");

        iNo = -iNo;
    }
    
   while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if (iDigit % 2 != 0)
        {
            iOSum = iOSum + iDigit;
        }

        iNo = iNo/10;
      
    }

    return iOSum;  
}

int CountDiff(int iNo)
{
    int EvenSum = 0;
    int OddSum = 0;
    int Diff = 0;

    EvenSum = SumEven(iNo);
    OddSum = SumOdd(iNo);

    Diff = EvenSum - OddSum;

    return Diff;
    

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter your number: ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Difference between Sum of even and odd digits are : %d",iRet);



    return 0;
}