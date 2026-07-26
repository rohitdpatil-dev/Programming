#include <stdio.h>
#include <string.h>

void StrNCpyX(char *src, char *dest,int iCnt)
{
    int i = 0;

    while (*src != '\0')
    {
        if (i <= iCnt)
        {
            i++;
            src++;
        }
        
        else
        {
            *dest = *src;

            src++;
            dest++;
        
        }
        
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

    StrNCpyX(Arr,Brr,10);

    printf("\n%s (in another string.)\n", Brr);
    
    printf("\n------------------------------------------------------------------\n");

    return 0;
}
