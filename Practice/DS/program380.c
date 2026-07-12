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
{
while (first)                                  // first != NULL                        
    {
        printf("| %d |->",first->data);
        first = first->next;
    }
    
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;

    while (first)                               // first != NULL
    {
        iCount++;
        first = first->next;
    }
    
    return 0; 
}

void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;


    if(NULL == *first)   // LL is Empty     // NULL aani *first swap
    {
        *first = newn;
    }

    else                // LL contains atleast 1 node
    {
        newn->next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first== NULL)   // LL is Empty
    {
        *first = newn;
    }

    else                // LL contains atleast 1 node
    {
        temp = *first;
        while (temp -> next != NULL)
        {
            temp = temp ->next;
        }

        temp -> next = newn;
        

    }
}

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
    int iRet = 0;

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d",iRet);

    InsertLast(&head,111);
    InsertLast(&head,121);

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d",iRet);


    return 0;
}