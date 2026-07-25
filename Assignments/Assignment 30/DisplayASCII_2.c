#include <stdio.h>

void DisplayASCII(char ch)
{
    printf("Decimal      : %d\n", ch);
    printf("Octal        : 0%o\n", ch);
    printf("Hexadecimal  : 0X%X\n", ch);
}

int main()
{
    char cValue = '\0';
    

    printf("Enter the character : ");
    scanf("%c",&cValue);

    DisplayASCII(cValue);
    
    return 0;
}