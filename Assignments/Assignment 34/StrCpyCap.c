#include <stdio.h>
#include <string.h>

void StrCpyCap(char *src, char *dest,int iCnt)
{

    while (*src != '\0')
    {
        if (*src >= 'A' && *src <= 'Z')
        {
            *dest = *src;

            src++;
            dest++;
        }
        
        else
        {
            src++;
        }
        
    }

    *dest = '\0';
    
}

int main()
{
    printf("\n==================================================================\n");
    printf("            Program to Copy Capital Letters of String\n");
    printf("==================================================================\n");

    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};

    // Accept Input
    printf("\nEnter String : ");
    scanf("%[^'\n']s", Arr);

    // Function Call
    StrCpyCap(Arr, Brr, 10);

    // Display Output
    printf("\n==================================================================\n");
    printf("\nOriginal String : %s\n", Arr);
    printf("Copied String   : %s\n", Brr);

    printf("\nBrr :   ");
    printf("\n");
for(int i = 0; Brr[i] != '\0'; i++)
{
    printf("+-------");
}
printf("+\n");

for(int i = 0; Brr[i] != '\0'; i++)
{
    printf("|   %c   ", Brr[i]);
}
printf("|\n");

for(int i = 0; Brr[i] != '\0'; i++)
{
    printf("+-------");
}
printf("+\n");
    printf("\n==================================================================\n");

    return 0;
}
