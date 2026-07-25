#include <stdio.h>
#include <string.h>

int Difference(char *str)
{
    int iSmallCount = 0;
    int iCapitalCount = 0;

    if (str == NULL)
    {
        return -1;
    }

    while (*str != '\0')        
    {
        if ( *str >= 'a' && *str <= 'z')
        {
            iSmallCount++;
        }

        else if (*str >= 'A' && *str <= 'Z')
        {
            iCapitalCount++;
        }
        
        str++;
        
    }

    
    
    return iSmallCount-iCapitalCount;

}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("\nEnter string : ");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("Number of Small case characters in String : %d\n",iRet);


    return 0;
}
