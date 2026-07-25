#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkSpeacial(char ch)
{
    if (ch >= '!' && ch <= '*')
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

    bRet = ChkSpeacial(cValue);

    if (bRet == TRUE)
    {
        printf("It is a Speacial Character.\n");
    }
    else
    {
        printf("It is not a Speacial Character.\n");

    }
    
    return 0;
}