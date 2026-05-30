#include <stdio.h>


//Declaration
#pragma pack(1)
struct Demo
{
    int i;      //4
    char ch;    //1
    float f;   //4


};

int main ()
{
    struct Demo dobj;
    struct Demo *ptr = NULL;

    ptr = &dobj;
   
    ptr->i = 11;
    ptr->ch = 'A';
    ptr->f = 10.0f;

    printf("%d\n",ptr->i);
    printf("%d\n",ptr->ch);
    printf("%d\n",ptr->f);

    
    return 0;

}
