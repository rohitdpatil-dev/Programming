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

        void fun()
        {
            cout<<"Inside non static fun\n";
            cout<<"i : "<<i<<"\n";
            cout<<"j : "<<j<<"\n";
            cout<<"k : "<<k<<"\n";
        }

        static void gun()               // Static method
        {
            cout<<"Inside static gun\n";
            // cout<<"i : "<<i<<"\n";  // Error: Cannot access non-static member in static function
            // cout<<"j : "<<j<<"\n";  // Error: Cannot access non-static member in static function
            cout<<"k : "<<k<<"\n";    // OK: Can access static member in static function
        }
};

int Demo::k=11;                   // Static data member initialization

int main()
{
    cout<<Demo::k<<"\n";                 // 11

    Demo::gun();                        // Inside static gun
                                        // k : 11   
    Demo dobj;
    cout<<dobj.i<<"\n";                 // 0
    cout<<dobj.j<<"\n";                 // 0

    dobj.fun();                         // Inside non static fun
                                        // i : 0
                                        // j : 0
                                        // k : 11
    return 0;
}