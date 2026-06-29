
#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        
        
        ArrayX(int x)
        {
            iSize = x;
            Arr = new int[iSize];

        }

        ~ArrayX()
        {
            cout<<"Inside Destructer.";
          delete []Arr;  
        }
};
int main()
{
                                
    ArrayX *aobj1 = new ArrayX(5);              // Object Creation              
    
    // LOGIC (Function call)

    delete aobj1;                                           // Object Deletion
    
    return 0;

}
