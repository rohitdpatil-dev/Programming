#include<stdio.h>

int main()
{
   int i = 11;
   short int j = 11;
   long int k = 11;

   printf("size of int : %lu\n",sizeof(i));
   printf("size of short int : %lu\n",sizeof(j));
   printf("size of long int : %lu\n",sizeof(k));
 
   return 0;
}