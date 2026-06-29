#include <stdio.h>

int CountSpace(const char *  str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str >= 97 && *str <= 122)          // It works but dnt use Ascii Value (Bad programming practice)       
        {
            iCount++;

        }
        str++;              
    }

    return iCount;
}



int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);               

    

    iRet = CountSpace(Arr);

    printf("Frequency of a is : %d",iRet);
    
     


    return 0;
}

