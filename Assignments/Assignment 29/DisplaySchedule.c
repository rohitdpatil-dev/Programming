#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
void DisplaySchedule(char ch)
{
    if (ch == 'A' || ch == 'a')
    {
        printf("Your exam is at 7 AM.");
        return;
    }
    else if (ch == 'B' || ch == 'b')
    {
        printf("Your exam is at 8:30 AM.");
        return;
    }
    else if (ch == 'C' || ch == 'c')
    {
        printf("Your exam is at 9:20 AM.");
        return;
    }
    else if (ch == 'D' || ch == 'd')
    {
        printf("Your exam is at 10:30 AM.");
        return;
    }
    
    else
    {
        printf("Invalid Division.");
        return;
    }
    
    
}

int main()
{
    char cValue = '\0';
    

    printf("Enter the character : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);
    
    return 0;
}