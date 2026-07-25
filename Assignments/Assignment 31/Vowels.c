#include <stdio.h>
#include <string.h>

int Vowels(char *str)
{
    int iVowelCount = 0;

    if (str == NULL)
    {
        return -1;
    }

    while (*str != '\0')        
    {
        if ( *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' )
        {
            iVowelCount++;
        }

        str++;
        
    }

    
    
    return iVowelCount;

}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("\nEnter string : ");
    scanf("%[^'\n']s",Arr);

    iRet = Vowels(Arr);

    printf("Number of Vowels in String : %d\n",iRet);


    return 0;
}
