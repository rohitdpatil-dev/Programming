#include <stdio.h>
#include <string.h>

int CountSmall(char *str)
{
    int iCount = 0;

    if (str == NULL)
    {
        return -1;
    }

    while (*str != '\0')        
    {
        if ( *str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
        str++;
        
    }
    
    return iCount;

}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("\nEnter string : ");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);

    printf("Number of Small case characters in String are : %d\n",iRet);


    return 0;
}
