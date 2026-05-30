#include <iostream>
using namespace std;
class Marvellous
{
    public:             // Access specifier
    int No1,No2;        // Characteristics

    // Deault Constructor
    Marvellous()
    {
        cout<<"Inside Default Constructor\n";
        No1 = 0;
        No2 = 0;
    }

    // Parameterized Constructor
    Marvellous(int A,int B)
    {
        cout<<"Inside Parameterized Constructor\n";
        No1 = A;
        No2 = B;
    }

    // Copy Constructor
    Marvellous(Marvellous &ref)
    {
        cout<<"Inside Copy Constructor\n";
        No1 = ref.No1;
        No2 = ref.No2;

    }
    // Destructor
    ~Marvellous()
    {
        cout<<"Inside  Destructor\n";
    }
};


int main()
{
       cout<<"Inside Main\n";
   
    Marvellous mobj1;                     // Default Constructor
    Marvellous mobj2(11,21);                // Parameterized Constructor
    Marvellous mobj3(mobj2);                // Copy Constructor


    cout<<"End of Main\n";

    return 0;
    // All destructors gets called
}