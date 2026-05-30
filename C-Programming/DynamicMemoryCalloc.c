#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 0;
    float *Marks = NULL;
    printf("Enter number of elements: ");
    scanf("%d",&size);
    int i = 0;


    //Dynamic memory allocation
    Marks = (float *)calloc(size , sizeof(float));

    // float marks[5];                      // 20 bytes


    printf("\n\nEnter your marks: \n");

    // Iteration
    //     1    2    3
    for(i = 0; i < size; i++)
    {
        scanf("%f",&Marks[i]);          // 4
    }

    printf("Entered marks are: \n\n\n");

     // Iteration
    //     1    2    3
    for (i = 0 ; i < size; i++)
    {
        printf("Subject %d : %f\n",i,Marks[i]);          // 4
    }

    free(Marks);

    return 0;
}