#include <stdio.h>
#include <string.h>

int CountWhite(const char *str)
{
    int iCount = 0;

    if (str == NULL)
    {
        return 0;
    }

    while (*str != '\0')        
    {
        if ( *str == ' ' )
        {
            iCount++;
        }
        
        str++;
    }

    return iCount;
    
}

int main()
{
    printf("\n--------------------------------------------------\n");
    printf("        Program to Count White Spaces\n");
    printf("--------------------------------------------------\n");

    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("\nEnter string : ");
    scanf("%[^'\n']s", Arr);

    printf("\n--------------------------------------------------\n");

    iRet = CountWhite(Arr);

    printf("Number of spaces is string : %d\n", iRet);

    printf("--------------------------------------------------\n");

    return 0;
}
