#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void fun()
        { cout<<"Inside Base Fun\n";};

        void gun()
        { cout<<"Inside Base Gun\n";};

        void sun()
        { cout<<"Inside Base Sun\n";};
};  
        // 8 Bytes

class Derived : public Base 
{
    public:
        int x,y;   
        
        void fun()          // Re-Deination
        { cout<<"Inside Derived Fun\n";};

        void sun()          // Re-Defination
        { cout<<"Inside Derived Sun\n";};

        void run()          // Defination
        { cout<<"Inside Derived Run\n";};
};
    // 16 Bytes

int main()
{
   cout<<sizeof(Base)<<"\n";
   cout<<sizeof(Derived)<<"\n";
    

    return 0;
}