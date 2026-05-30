#include <stdio.h>

int main()
{
    char str[] = "Ganesh";
    char * ptr = NULL;

    ptr = str;

    while (*ptr != '\0');
    {
    printf("%c\n",*ptr);                // G
    ptr++;                              // 101
    }
    

    
    

    return 0;
}