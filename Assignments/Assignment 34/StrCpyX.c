#include <stdio.h>
#include <string.h>

void StrCpyX(char *src, char *dest)
{
    int iCnt = 0;

    while (*src != '\0')
    {
        *dest = *src;

        src++;
        dest++;
        iCnt++;
    }

    *dest = '\0';
    
}

int main()
{
    printf("\n------------------------------------------------------------------\n");
    printf("        Program to copy string in another string \n");
    printf("------------------------------------------------------------------\n");

    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};

    printf("\nEnter string : ");
    scanf("%[^'\n']s", Arr);

    printf("\n------------------------------------------------------------------\n");

    StrCpyX(Arr,Brr);

    printf("\n%s (in another string.)\n", Brr);
    
    printf("\n------------------------------------------------------------------\n");

    return 0;
}
