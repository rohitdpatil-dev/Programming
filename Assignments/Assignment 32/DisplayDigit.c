#include <stdio.h>
#include <string.h>

void DisplayDigit(char *str)
{
    int iCount = 0;

    if (str == NULL)
    {
        return ;
    }

    while (*str != '\0')        
    {
        if ( *str >= 48 && *str <= 57)
        {
            printf("%c",*str);
        }
        
        
        str++;
        
    }
    
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("\nEnter string : ");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);

    return 0;
}
