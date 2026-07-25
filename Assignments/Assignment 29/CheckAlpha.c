#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkAlpha(char ch)
{
    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
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

    bRet = ChkAlpha(cValue);

    if (bRet == TRUE)
    {
        printf("It is a Character.\n");
    }
    else
    {
        printf("It is not a Character.\n");

    }
    
    

    return 0;
}