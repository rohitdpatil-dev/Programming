
#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    private:
        int *Arr;
        int iSize;

        
    public:
       
        // Parameterized constructer with default arument.
        
        ArrayX(int x=5)
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
                                
    ArrayX *aobj1 = new ArrayX();               // Parameterized            
    ArrayX *aobj2 = new ArrayX(15);              // Parameterized             
    
    // LOGIC (Function call)
    
    delete aobj1;                                           // Object Deletion
    delete aobj2;                                           // Object Deletion
    
    return 0;

}
