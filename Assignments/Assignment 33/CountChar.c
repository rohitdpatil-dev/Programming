#include <stdio.h>
#include <string.h>

int CountChar(const char *str , char cValue)
{
    int iCount = 0;

    if (str == NULL)
    {
        return 0;
    }

    while (*str != '\0')        
    {
        if ( *str == cValue )
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
    printf("        Program to Check Frequency of Character\n");
    printf("--------------------------------------------------\n");

    char Arr[20] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("\nEnter string : ");
    scanf("%[^'\n']s", Arr);

    printf("\nEnter the character : ");
    scanf(" %c", &cValue);

    printf("\n--------------------------------------------------\n");

    iRet = CountChar(Arr,cValue);

    printf("Frequency of %c in string \"%s\" is : %d\n",cValue,Arr,iRet);
    
    printf("--------------------------------------------------\n");

    return 0;
}
