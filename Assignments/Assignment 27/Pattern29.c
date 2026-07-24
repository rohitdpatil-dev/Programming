/*
----------------------------------------------------------
|   Function Name : Pattern
|   Description   : Displays pattern according to
|                   given number of rows and columns.
----------------------------------------------------------
*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    // Variable Declaration
    int iCnt = 0;
    int jCnt = 0;

    // Traverse through each row
    while(iCnt < iRow)
    {
        // Reset column counter for every new row
        jCnt = 0;

        // Traverse through each column
        while(jCnt < iCol)
        {
            if(jCnt == iCol-1 || jCnt == 0 || iCnt == iRow-1 || iCnt == 0 || iCnt==jCnt)
            {
                printf("* ");
            }
            
            else
            {
                printf("  ");
            }

            jCnt++;
        }

        // Move cursor to next line
        printf("\n");

        // Move to next row
        iCnt++;
    }
}

int main()
{
    // Variable Declaration
    int iRow = 0;
    int iCol = 0;

    // Display Application Header
    printf("\n=================================================\n");
    printf("            PATTERN APPLICATION\n");
    printf("=================================================\n\n");

    // Accept number of rows
    printf("Enter Number of Rows    : ");
    scanf("%d",&iRow);

    // Accept number of columns
    printf("Enter Number of Columns : ");
    scanf("%d",&iCol);

    // Validate Input
    if((iRow <= 0) || (iCol <= 0) || iRow != iCol )
    {
        printf("\n-------------------------------------------------\n");
        printf("\n             Invalid Input\n");
        printf("\n-------------------------------------------------\n");
        return -1;
    }

    // Display Pattern
    printf("\nGenerated Pattern :\n");
    printf("-------------------------------------------------\n");

    Pattern(iRow, iCol);

    printf("\n-------------------------------------------------\n");

    return 0;
}