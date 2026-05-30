#include <stdio.h>

int Add(int No1,int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;

}

int Sub(int No1,int No2)
{
    int Ans = 0;
    Ans = No1 - No2;
    return Ans;

}





int main()
{
    int a = 11, b = 10;
    int Result = 0;

    Result = Add(a,b);
    printf("Addition is : %d\n",Result);        // 21

    Result = Sub(a,b);
    printf("Substraction is : %d\n",Result);            // 1

    return 0;

}