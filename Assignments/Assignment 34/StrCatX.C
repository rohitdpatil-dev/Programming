#include <stdio.h>
#include <string.h>

void StrCatX(char *src, char *dest)
{
    // Move src to the end of first string
    while (*src != '\0')
    {
        src++;
    }
    *src = ' ';
    src++;

    // Copy second string after first string
    
    while (*dest != '\0')
    {
        *src = *dest;

        src++;
        dest++;
    }

    // Append NULL character
    *src = '\0';
}

int main()
{
    printf("\n------------------------------------------------------------------\n");
    printf("          Program to Concatenate Two Strings\n");
    printf("------------------------------------------------------------------\n");

    char Arr[40] = {'\0'};
    char Brr[20] = {'\0'};

    printf("\nEnter First String  : ");
    scanf("%[^'\n']s", Arr);

    getchar();      // Consume '\n' left by first scanf

    printf("\nEnter Second String : ");
    scanf("%[^'\n']s", Brr);

    printf("\n------------------------------------------------------------------\n");

    StrCatX(Arr, Brr);

    printf("\nConcatenated String : %s\n", Arr);

    printf("\n------------------------------------------------------------------\n");

    return 0;
}