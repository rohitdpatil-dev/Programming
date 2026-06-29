
#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
    private:
        int *Arr;
        int iSize;

        
    public:

        int iCnt = 0;
       
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

        void Accept()
        {
            cout<<"Enter the elements: \n";

            for (iCnt = 0 ; iCnt < iSize ; iCnt++ )
            {
                cin>>Arr[iCnt];
            }
        }
        void Display()
        {
            cout<<"Elements of the arrat are: \n";

            for (iCnt = 0 ; iCnt < iSize ; iCnt++ )
            {
                cout<<Arr[iCnt]<<endl;
            }
        }

        int Summation()
        {
            int iSum = 0;
            int iCnt = 0;

            for (iCnt = 0 ; iCnt < iSize ; iCnt++ )
            {
                iSum = iSum + Arr[iCnt];
            }
        }
};
int main()
{
                                
    ArrayX *aobj = NULL;
    int iLength = 0;
    int iRet = 0;

    cout<<"Ener the number of elements : \n";
    cin>>iLength;

    aobj = new ArrayX(iLength);

    aobj->Accept();
    aobj->Display();

    iRet = aobj->Summation();

    cout<<"Summation is: "<<iRet<<"\n";

    delete aobj;
    return 0;

}
