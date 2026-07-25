#include <stdio.h>

void DisplayASCII()
{
    int i = 0;

        printf("-------------------------------------------------\n");
        printf("Dec\tHex\tOct\tChar\n");
        printf("-------------------------------------------------\n");

        for(i = 0; i <= 255; i++)
        {
            printf("%3d\t",i);
            printf("%02X\t", i);
            printf("%03o\t",i);
            printf("%c\t",i);
            
            printf("\n",i);
        }
}

int main()
{
    

    DisplayASCII();
    
    return 0;
}