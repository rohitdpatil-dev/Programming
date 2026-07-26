#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define TRUE 1 
#define FALSE 0 

typedef int BOOL;

BOOL ChkChar(const char *str , char cValue)
{
    if (str == NULL)
    {
        return 0;
    }

    while (*str != '\0')        
    {
        if ( *str == cValue )
        {
            return TRUE;
        }
        
        str++;
    }

    return FALSE;
    
}

int main()
{
    printf("\n--------------------------------------------------\n");
    printf("        Program to Check Character\n");
    printf("--------------------------------------------------\n");

    char Arr[20] = {'\0'};
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("\nEnter string : ");
    scanf("%[^'\n']s", Arr);

    printf("\nEnter the character : ");
    scanf(" %c", &cValue);

    printf("\n--------------------------------------------------\n");

    if ((bRet = ChkChar(Arr,cValue)) == TRUE)
    {
        printf("%c is present in string.\n",cValue);
    }
    else
    {
        printf("%c is not present in string.\n",cValue);
    }
    
    printf("--------------------------------------------------\n");

    return 0;
}
