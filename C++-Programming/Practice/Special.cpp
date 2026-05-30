#include <iostream>
using namespace std;

class Demo
{
    public:
        int i;
        float f;

    Demo()
    {
        cout<<"Inside Constructor\n";
        i=0;
        f=0.0f;
    }

    ~Demo()
    {
        cout<<"Inside Destructor\n";
    }

    void fun()      //Behaviour
        {
            cout<<"Inside Fun\n";
        }
};


int main()
{
    cout<<"Inside main\n";

    Demo dobj;

    cout<<dobj.i <<"\n";

    dobj.fun();

    cout <<"End of main\n";

    return 0;
}