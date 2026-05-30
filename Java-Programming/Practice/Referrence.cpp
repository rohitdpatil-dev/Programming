#include <iostream>
using namespace std;

int main ()
{
    int No=11;
    int &x = No;

    cout<<"Value of No: "<<No<<"\n";            // 11
    cout<<"Value of X: "<<x<<"\n";              // 11
    
    cout<<"Address of No: "<<&No<<"\n";         // 100
    cout<<"Address of X: "<<&x<<"\n";           // 100      
    
    cout<<"Size of No: "<<sizeof(no)<<"\n";     // 4
    cout<<"Size of X: "<<sizeof(x)<<"\n";       // 4
    
    
    
    return 0;
}