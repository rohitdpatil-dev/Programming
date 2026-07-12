#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first)
{}

int Count(PNODE first)
{
   return 0; 
}

void InsertFirst(PPNODE first, int iNo)
{}

void InsertLast(PPNODE last, int iNO)
{}

void InsertAtPos(PPNODE last, int iNO, int iPos)
{}

void DeleteFirst(PPNODE first)
{}

void DeleteLast(PPNODE last)
{}

void DeleteAtPos(PPNODE last,  int iPos)
{}



int main ()
{

    PNODE head = NULL;


    return 0;
}