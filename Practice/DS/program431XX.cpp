#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCL
{
    private:
        PNODE first;
        PNODE last;
        int iCount;
    
    public:
        SinglyCL();

        void Display();
        int Count();

        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);
        
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyCL :: SinglyCL()
{

    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

void SinglyCL :: Display()
{
    PNODE temp = NULL;

    

    if(first == NULL && last == NULL)
    {
        return;
    }

    temp = first;

    do
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    }while(last -> next != temp);

    cout<<"\n";
}

int SinglyCL :: Count()
{
    return iCount;
}

void SinglyCL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }

    last->next = first;
    iCount++;
}

void SinglyCL :: InsertLast(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        last = newn;
    }

    last->next = first;
    iCount++;
}

void SinglyCL :: InsertAtPos(int iNo, int iPos)
{
    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if (iPos == 1)
    {
        InsertFirst(iNo);
    }

    else if (iPos == iCount+1)
    {
        InsertLast(iNo);
    }

    else
    {
        PNODE newn = new NODE;
        PNODE temp = NULL;
        int i = 0;

        

        newn->data = iNo;
        newn->next = NULL;

        temp = first;
        
        for ( i = 1; i < iPos; i++)
        {
            temp = temp->next;
        }
        
        newn->next = temp->next;
        temp->next = newn;

        iCount++;
        
    }
      
}

void SinglyCL :: DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }

    else
    {
        PNODE temp = NULL;
        temp = first;

        first = first->next;

        // last->next = temp->next;

        delete temp;
    }
    

    last->next = first;
    iCount--;
}

void SinglyCL :: DeleteLast()
{
    if(first == NULL && last == NULL)
    {
        return;
    }

else if (first == last)
{
    delete first;
    first = NULL;
    last = NULL;
}
else
{
    PNODE temp = NULL;
    temp = first;

    while (temp->next != last)  
    {
        temp = temp ->next;
    }

    delete last;
    last = temp;
    temp->next = first;
    
}

iCount--;

}

void SinglyCL :: DeleteAtPos(int iPos)
{
    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if (iPos == 1)
    {
        DeleteFirst();
    }

    else if (iPos == iCount)
    {
        DeleteLast();
    }

    else
    {
        
        PNODE temp = NULL;
        PNODE target = NULL;
        int i = 0;


        temp = first;
        
        for ( i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = target->next;
        delete target;
    
        iCount--;
        
    }
         
}

int main()
{
    SinglyCL sobj;

    int iChoice = 0;
    int iValue = 0;
    int iRet = 0;
    int iPosition = 0;

    cout<<"\n=============================================\n";
    cout<<"   Singly Circular Linked List Application";
    cout<<"\n=============================================\n";

    while(iChoice != 9)
    {
        cout<<"\n=============================================\n";
        cout<<"                MAIN MENU\n";
        cout<<"=============================================\n";
        cout<<" 1. Insert Node at First\n";
        cout<<" 2. Insert Node at Last\n";
        cout<<" 3. Insert Node at Position\n";
        cout<<" 4. Delete First Node\n";
        cout<<" 5. Delete Last Node\n";
        cout<<" 6. Delete Node at Position\n";
        cout<<" 7. Display Linked List\n";
        cout<<" 8. Count Nodes\n";
        cout<<" 9. Exit\n";
        cout<<"=============================================\n";

        cout<<"Enter Your Choice : ";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"\nEnter Value : ";
                cin>>iValue;
                sobj.InsertFirst(iValue);
                cout<<"\nNode Inserted Successfully.\n";
                break;

            case 2:
                cout<<"\nEnter Value : ";
                cin>>iValue;
                sobj.InsertLast(iValue);
                cout<<"\nNode Inserted Successfully.\n";
                break;

            case 3:
                cout<<"\nEnter Value : ";
                cin>>iValue;
                cout<<"Enter Position : ";
                cin>>iPosition;
                sobj.InsertAtPos(iValue,iPosition);
                cout<<"\nOperation Completed.\n";
                break;

            case 4:
                sobj.DeleteFirst();
                cout<<"\nFirst Node Deleted Successfully.\n";
                break;

            case 5:
                sobj.DeleteLast();
                cout<<"\nLast Node Deleted Successfully.\n";
                break;

            case 6:
                cout<<"\nEnter Position : ";
                cin>>iPosition;
                sobj.DeleteAtPos(iPosition);
                cout<<"\nOperation Completed.\n";
                break;

            case 7:
                cout<<"\n=============================================\n";
                cout<<"           LINKED LIST ELEMENTS\n";
                cout<<"=============================================\n";
                sobj.Display();
                cout<<"=============================================\n";
                break;

            case 8:
                iRet = sobj.Count();
                cout<<"\nTotal Number of Nodes : "<<iRet<<"\n";
                break;

            case 9:
                cout<<"\n=============================================\n";
                cout<<"   Thank You For Using The Application\n";
                cout<<"=============================================\n";
                break;

            default:
                cout<<"\nInvalid Choice... Please Try Again.\n";
                break;
        }
    }

    return 0;
}