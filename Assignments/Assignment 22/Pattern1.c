#include <stdio.h>

// Function Name    : Pattern
// Description      : Display first N capital alphabets
// Input            : Integer
// Output           : Characters
// Author           : Rohit Patil

void Pattern(int iNo)
{
    // Variable Declaration
    char iAlpha = 'A';
    int iCnt = 0;

    // Display first N alphabets
    while(iCnt < iNo)
    {
        printf("%c\t",iAlpha);

        iAlpha++;
        iCnt++;
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