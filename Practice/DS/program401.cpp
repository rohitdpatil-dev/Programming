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
typedef struct node** PPNODE;

class SinglyLL
{

    public :
        PNODE first;
        int iCount;
    
        SinglyLL()
        {
            cout<<"Inside constructer";
            this->first = NULL;
            this->iCount = 0;
        }

};

int main()
{
    SinglyLL sobj;

    cout<<sobj.first<<endl;
    cout<<sobj.iCount<<endl;

    // 5 Node

    sobj.first = NULL;              // Error
    sobj.iCount = 15;               // Error
    return 0;
}