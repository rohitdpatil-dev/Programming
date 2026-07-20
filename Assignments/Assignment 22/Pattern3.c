// Function Name    : Pattern
// Author           : Rohit Patil

#include <stdio.h>

void Pattern(int iNo)
{
    // Variable Declaration
   int iNum = 1;

    // Logic
    while(iNum <= iNo)
    {
        printf("%d\t*\t",iNum);

        iNum++;
    }
}

int main()
{
    // Variable Declaration
    int iValue = 0;

    // Accept input from user
    printf("-----------------------------------------\n");
    printf("      Display Capital Alphabet Pattern\n");
    printf("-----------------------------------------\n");

    printf("Enter Number of Elements : ");
    scanf("%d",&iValue);

    // Validate Input
    if(iValue <= 0)
    {
        printf("Invalid Input\n");
        return -1;
    }

    // Function Call
    printf("\nPattern is :\n");
    Pattern(iValue);

    printf("\n");

    return 0;
}