#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(char cCharacter)
{
    if(cCharacter == 'a' || cCharacter == 'e' || cCharacter == 'i' || cCharacter == 'o' || cCharacter == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = 0;

    printf("Enter Your Character: ");
    scanf("%c",&cValue);
    
    BOOL bRet = FALSE;

    bRet = Check(cValue);

    if(bRet == TRUE )
    {
        printf("It is Vowel !!!");
    }
    else
    {
        printf("It is not Vowel.");
    }

    return 0;
}