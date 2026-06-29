#include<iostream>
using namespace std;

int Summation(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
    
}


int main()
{
    int *Brr = NULL;
    int iLength = 0 ;
    int iCnt = 0;


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
