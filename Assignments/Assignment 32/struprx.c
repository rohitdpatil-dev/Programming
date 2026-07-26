#include <stdio.h>
#include <string.h>

void struprx(char *str)
{
    int iCount = 0;

    if (str == NULL)
    {
        return ;
    }

    while (*str != '\0')        
    {
        if ( *str >= 'a' && *str <= 'z')
        {
            *str -= 32;
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

    struprx(Arr);

    return 0;
}
