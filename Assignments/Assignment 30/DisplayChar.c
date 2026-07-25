#include <stdio.h>

void Display(char ch)
{

    if (ch >= 'A' && ch <= 'Z')
    {
        while (ch != 'Z'+1)
        {
            printf("%c ",ch);
            ch++;
        }
    
        return;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        while (ch != 'a'-1)
        {
            printf("%c ",ch);
            ch--;
        }

        return;
    }
    
    else
    {
        printf("Invalid character.",ch);
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