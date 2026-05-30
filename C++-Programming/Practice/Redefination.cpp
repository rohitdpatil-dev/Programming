#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void fun()
        { cout<<"Inside Base Fun\n"};

        void gun()
        { cout<<"Inside Base Gun\n"};

        void sun()
        { cout<<"Inside Base Sun\n"};
};  
        // 8 Bytes

class Derived : public Base 
{
    public:
        int x,y;   
        
        void fun()          // Re-Deination
        { cout<<"Inside Derived Fun\n"};

        void sun()          // Re-Definatin
        { cout<<"Inside Derived Sun\n"};

        void run()          // Definatin
        { cout<<"Inside Derived Run\n"};
};

int main()
{
    Derived *dp = NULL;
   

    dp = new Derived();

    bp->fun();          // Base Fun
    bp->gun();          // Base Gun 
    bp->sun();          // Base Sun
    // bp->run();          // Error
    

    return 0;
}