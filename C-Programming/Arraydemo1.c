#include<stdio.h>

int main()
{
    char crr[4] = {'a','b','c','d'};
    int iArr[4] = {10,20,30,40};
    float fArr[4] = {10.0f,20.0f,40.0f,60.0f};
    double dArr[4] = {10.0,20.0,40.0,60.0};

    printf("size of character array : %lu\n",sizeof(cArr));
    printf("size of integer array : %lu\n",sizeof(iArr));
    printf("size of Float array : %lu\n",sizeof(fArr));
    printf("size of double array : %lu\n",sizeof(dArr));
    return 0;
}