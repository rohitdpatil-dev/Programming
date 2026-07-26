#include <stdio.h>
#include <string.h>

void strlwrx(char *str)
{
    int iCount = 0;

    if (str == NULL)
    {
        return ;
    }

    while (*str != '\0')        
    {
        if ( *str >= 'A' && *str <= 'Z')
        {
            *str += 32;
            printf("%c",*str);
        }
        else 
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

    strlwrx(Arr);

    return 0;
}
