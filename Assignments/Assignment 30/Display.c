#include <stdio.h>

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c",ch+32);
        return;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c",ch-32);
        return;
    }
    
    else
    {
        printf("%c",ch);
        return;
    }
    
    
}

int main()
{
    char cValue = '\0';
    

    printf("Enter the character : ");
    scanf("%c",&cValue);

    Display(cValue);
    
    return 0;
}