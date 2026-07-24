/*
    Function Name : Pattern
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
    int iNum = 0;
    char cAlpha = 97;
    

    // Traverse through each row
    while(iCnt2 < iRow)
{
    iCnt = 0;

    if(iCnt2 % 2 == 0)
    {
        cAlpha = 97;
        while(iCnt < iCol)
    {
        printf("%c\t",cAlpha);
        cAlpha++;
        iCnt++;
    }
        
    }
    else
    {
        iNum = 1;

        while(iCnt < iCol)
    {
        printf("%d\t",iNum);
        iNum++;
        iCnt++;
    }
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
    printf("           PATTERN APPLICATION\n");
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