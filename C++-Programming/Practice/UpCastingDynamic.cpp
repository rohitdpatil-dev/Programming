#include<iostream>
namespace std;

class Base
{
    public:
        int i,j;


};

class Derived : public Base 
{
    public:
        int p,q;    

};

int main()
{
    Derived *dp = NULL;
   

    dp = new Derived();
    

    return 0;
}