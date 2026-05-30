#include <stdio.h>

int main()
{
    //static memory allocation
    float marks[5];
    int i = 0;

    printf("\n\n\t\tEnter your marks: \n");

    // Iteration
    //     1    2    3
    for(i = 0; i < 5; i++)
    {
        scanf("%f",&marks[i]);          // 4
    }

    printf("Entered marks are: \n\n\n");

     // Iteration
    //     1    2    3
    for (i = 0 ; i < 5; i++)
    {
        printf("Subject %d : %f\n",i,marks[i]);          // 4
    }



    return 0;
}