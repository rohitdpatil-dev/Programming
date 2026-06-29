#include<iostream>
using namespace std;

int main()
{
    int *Brr = NULL;
    int iLength = 0 ;
    int iCnt = 0;

    ///////////////////////////////////////////////////////////////////////////////////////
    //
    //         C    :     Brr    
    //         C++  :         
    //         Java :         
    //
    ///////////////////////////////////////////////////////////////////////////////////////

    cout<<"Enter the number of elements: \n";
    cin>>iLength;

    Brr = new int[iLength];

    cout<<"Enter the numbers: \n";

    for (iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        cin>>Brr[iCnt];
    }

    cout<<"Elements of Array are: \n";

    for (iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        cout<<Brr[iCnt];
    }




    return 0;
}
