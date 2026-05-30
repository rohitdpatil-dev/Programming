#include <iostream>
using namespace std;

class Demo
{
    public:
        int i;                          // Non Static
        int j;                          // Non Static
        static int k;                   // Static

};
int main()
{
    Demo dobj;

    cout<<sizeof(dobj);



    return 0;
}