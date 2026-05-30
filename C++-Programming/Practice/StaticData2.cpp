#include <iostream>
using namespace std;

class Demo
{
    public:
        int i;                          // Non Static
        int j;                          // Non Static
        static int k;                   // Static

        Demo()
        {
            i=0;
            j=0;
        }
};

int Demo::k=11;                   // Static data member initialization


int main()
{
    Demo dobj;

    cout<<Demo::k<<"\n";                 // 11
    
    cout<<dobj.i<<"\n";                 // 0
    cout<<dobj.j<<"\n";                 // 0

    return 0;
}