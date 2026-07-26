#include <stdio.h>
#include <string.h>

void StrRevX(const char *str)
{
    if (str == NULL)
    {
        return;
    }

    const char *start = str;

    int iCnt = strlen(str)-1;
    str = str + strlen(str) - 1;

    printf("\nReversed String : ");
    
    while (str >= start)        
    {
        printf("%c",*str);
        
        str--;
        
    }
    printf("\n");
    
}

int main()
{
    printf("\n--------------------------------------------------\n");
    printf("        Program to reverse the sring \n");
    printf("--------------------------------------------------\n");

    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("\nEnter string : ");
    scanf("%[^'\n']s", Arr);

    printf("\n--------------------------------------------------\n");

    StrRevX(Arr);

    if(iRet == -1)
    {
        printf("Invalid");
    }

    
    printf("\n--------------------------------------------------\n");

    return 0;
}
