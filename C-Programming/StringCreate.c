#include <stdio.h>

int main()
{
    char arr[6]= {'H','e','l','l','o','\0'};
    char brr[]= {'H','e','l','l','o','\0'};
    char crr[]= "Hello";

    printf("%s\n",arr);
    printf("%s\n",brr);
    printf("%s\n",crr);

    return 0;
}