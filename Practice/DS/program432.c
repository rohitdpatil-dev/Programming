#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first, PNODE last)
{}
 
int Count(PNODE first, PNODE last)
{
    return 0;
}
 
void InsertFirst(PNODE first, PNODE last, int iNo)
{}
 
void InsertLast(PNODE first, PNODE last, int iNo)
{}
 
void InsertAtPos(PNODE first, PNODE last, int iNo , int iPos)
{}
 
void DeleteFirst(PNODE first, PNODE last, int iNo)
{}
 
void DeleteLast(PNODE first, PNODE last, int iNo)
{}
 
void DeleteAtPos(PNODE first, PNODE last, int iNo , int iPos)
{}
 
 
 

 
int main()
{



    return 0;
}