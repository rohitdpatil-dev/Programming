
#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        
        // Parameterized Constructer
        ArrayX(int x)
        {
            cout<<"Inside Constructer.";
            iSize = x;
            Arr = new int[iSize];

        }

        // Destructer
        ~ArrayX()
        {
            cout<<"Inside Destructer.";
          delete []Arr;  
        }
};
int main()
{

    //Static memory allocation for object 
    // ArrayX aobj1(5);
                                
    ArrayX *aobj1 = new ArrayX(5);                            // Parameterized
    
    delete aobj1;

    cout<<"End of main";
    
    return 0;

}
