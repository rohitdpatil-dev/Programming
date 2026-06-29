
#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    private:
        int *Arr;
        int iSize;

        
    public:
        ArrayX()
        {
            iSize = 5;
            Arr = new int[iSize];

        }
        ArrayX(int x)
        {
            iSize = x;
            Arr = new int[iSize];

        }

        ~ArrayX()
        {
            cout<<"Inside Destructer.\n";
          delete []Arr;  
        }
};
int main()
{
                                
    ArrayX *aobj1 = new ArrayX();              // Default              
    ArrayX *aobj2 = new ArrayX(5);              // Parameterized             
    
    // LOGIC (Function call)
    
    delete aobj1;                                           // Object Deletion
    delete aobj2;                                           // Object Deletion
    
    return 0;

}
