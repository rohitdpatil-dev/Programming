#include <iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;

};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyLL
{

    private :
        PNODE first;
        int iCount;

    public :
        SinglyLL()
        {
            cout<<"Inside constructer";
            this->first = NULL;
            this->iCount = 0;
        }

    void Display()
    {}

    int COUNT()
    {
        return this->iCount;
    }

    void InsertFirst(int iNO)
    {}
    
    void InsertLast(int iNO)
    {}

    void InsertAtPos(int iNO, int iPos)
    {}

    void DeleteFirst()
    {}
    
    void DeleteLast()
    {}

    void DeleteAtPos(int iPos)
    {}

};

int main()
{
    SinglyLL sobj;

    



    return 0;
}