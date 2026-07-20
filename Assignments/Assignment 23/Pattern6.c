/*
    Function Name : Pattern
    Description   : Display '*' pattern in Row and Column format
    Input         : Integer, Integer
    Output        : Pattern
    Author        : Rohit Patil
    
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    // Variable Declaration
    int iCnt = 0;
    int iCnt2 = 0;

    // Traverse through each row
    while(iCnt2 < iRow)
    {
        // Reset column counter for every new row
        iCnt = 0;

        // Print '*' for each column
        printf("\t");

        while(iCnt < iCol)
        {
            printf("*\t");
            iCnt++;
        }

        // Move cursor to next line
        printf("\n");

        // Move to next row
        iCnt2++;
    }
}

int main()
{
    // Variable Declaration
    int iRow = 0;
    int iCol = 0;

    // Display Application Header
    printf("\n=================================================\n");
    printf("          STAR PATTERN APPLICATION\n");
    printf("=================================================\n\n");

    // Accept number of rows
    printf("Enter Number of Rows    : ");
    scanf("%d",&iRow);

    // Accept number of columns
    printf("Enter Number of Columns : ");
    scanf("%d",&iCol);

    // Validate Input
    if((iRow <= 0) || (iCol <= 0))
    {
        printf("\nInvalid Input\n");
        return -1;
    }

    // Display Pattern
    printf("\nGenerated Pattern : \n");
    printf("-------------------------------------------------\n");

    Pattern(iRow,iCol);

    printf("-------------------------------------------------\n");

    return 0;
}