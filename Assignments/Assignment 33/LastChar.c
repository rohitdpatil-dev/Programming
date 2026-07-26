#include <stdio.h>
#include <string.h>

int LastChar(const char *str , char cValue)
{
    if (str == NULL)
    {
        return -1;
    }

    const char *start = str;

    int iCnt = strlen(str)-1;
    str = str + strlen(str) - 1;

    while (str >= start)        
    {
        if ( *str == cValue )
        {
            return iCnt;
        }
        
        str--;
        iCnt--;
    }

    return -1;
    
}

int main()
{
    printf("\n--------------------------------------------------\n");
    printf("        Program to Check Index of Character\n");
    printf("--------------------------------------------------\n");

    char Arr[20] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("\nEnter string : ");
    scanf("%[^'\n']s", Arr);

    printf("\nEnter the character : ");
    scanf(" %c", &cValue);

    printf("\n--------------------------------------------------\n");

    iRet = LastChar(Arr,cValue);

    if(iRet == -1)
    {
        printf("%c is not present in string.\n", cValue);
    }
    else
    {
        printf("Last index of %c in string \"%s\" is : %d\n", cValue, Arr, iRet);
    }
    
    printf("--------------------------------------------------\n");

    return 0;
}
