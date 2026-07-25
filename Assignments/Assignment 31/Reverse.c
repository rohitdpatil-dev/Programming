#include <stdio.h>
#include <string.h>

void Reverse(char *str)
{
    
    int i = (strlen(str)-1);

    

    printf("Reverse of String : ");
    while (i >= 0)
    {
        printf("%c", str[i]);
        i--;
    }
    

}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("\nEnter string : ");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);


    return 0;
}
