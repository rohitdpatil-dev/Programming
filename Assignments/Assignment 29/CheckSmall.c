#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkSmall(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return 1;
    }
    
    else
    {
        return 0;
    }
    
    
}

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("Enter the character : ");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if (bRet == TRUE)
    {
        printf("It is a Small case Character.\n");
    }
    
    else
    {
        printf("It is not a Small case Character.\n");
    }
    
    return 0;
}