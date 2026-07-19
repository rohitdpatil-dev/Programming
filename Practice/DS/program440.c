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
{
    if (first == NULL && last == NULL)
    {
        return;
    }
    
    printf("\n");
    printf(" <=> ");
    do
    {
        printf("| %d | <=> ",first->data);
        first = first->next;
    } while (first != last->next);

    printf("\n");
    
    
}
 
int Count(PNODE first, PNODE last)
{
    int iCount = 0;

    if (first == NULL && last == NULL)
    {
        return iCount;
    }

    
    do
    {
        iCount++;
        first = first->next;
    } while (first != last->next);

    return iCount;
}
 
void InsertFirst(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if (*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;

    }
    else
    {
        newn->next = *first;
        (*first)->prev = newn;
        *first = newn;

    }
    
    (*last)->next = *first;
    (*first)->prev = *last;

}
 
void InsertLast(PPNODE first, PPNODE last, int iNo)
{    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if (*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;

    }
    else
    {
        (*last)->next = newn;
        newn->prev = *last;
        *last = newn;


    }
    
    (*last)->next = *first;
    (*first)->prev = *last;
}
 
void InsertAtPos(PPNODE first, PPNODE last, int iNo , int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iCount = 0;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    iCount = Count(*first,*last);

    if(iPos<1 || iPos> iCount+1)
    {
        return;
    }

    if (iPos==1)
    {
        InsertFirst(first,last,iNo);
    }
    else if (iPos == iCount+1)
    {
        InsertLast(first,last,iNo);

    }

    else
    {
        temp = *first;

        for (int i = 0; i < iCount+1 ; i++)
        {
            temp = temp->next;
        }

        // right
        newn->next = temp->next;
        temp->next->prev = newn;

        // left
        temp->next = newn;
        newn->prev = temp;
        
    }
    
    
}
 
void DeleteFirst(PPNODE first, PPNODE last)
{

    if (*first == NULL && *last == NULL)
    {
        return;

    }
    else if (*first == *last)
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    
    else
    {
        *first = (*first)->next;
        free((*last)->next);


        (*last)->next = *first;
        (*first)->prev = *last;
    }
    
 
}
 
void DeleteLast(PPNODE first, PPNODE last)
{
    
    if (*first == NULL && *last == NULL)
    {
        return;

    }
    else if (*first == *last)
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    
    else
    {
        *last = (*last)->prev;
        free((*last)->next);


        (*last)->next = *first;
        (*first)->prev = *last;
    }
    
 
}
 
void DeleteAtPos(PPNODE first, PPNODE last, int iNo , int iPos)
{
    
    PNODE temp = NULL;
    int iCount = 0;

    

    iCount = Count(*first,*last);

    if(iPos<1 || iPos> iCount+1)
    {
        return;
    }

    if (iPos==1)
    {
        DeleteFirst(first,last);
    }
    else if (iPos == iCount)
    {
        DeleteLast(first,last);

    }

    else
    {
        temp = *first;

        for (int i = 0; i < iCount+1 ; i++)
        {
            temp = temp->next;
        }

        // target = temp->next;
        // temp->next = target->next;
        temp->next = temp->next->next;
        free(temp->next->prev);         
        temp->next->prev = temp;
    }
        
}


 
 
 

 
int main()
{

    PNODE head = NULL;
    PNODE tail = NULL;
    int iRet = 0;
    

    InsertFirst(&head, &tail, 51); 
    InsertFirst(&head, &tail, 21); 
    InsertFirst(&head, &tail, 11); 

    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);

    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of nodes are: %d",iRet);
    
    DeleteFirst(&head,&tail);
    
    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of nodes are: %d",iRet);
    
    DeleteLast(&head,&tail);
    
    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of nodes are: %d",iRet);


    return 0;
}