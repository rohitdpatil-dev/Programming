#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void fun()
        { cout<<"Inside Base Fun\n";};

        virtual void gun()
        { cout<<"Inside Base Gun\n";};

        virtual void sun()
        { cout<<"Inside Base Sun\n";};
};  
        // 8 Bytes

class Derived : public Base 
{
    public:
        int x,y;   
        
        void fun()          // Re-Deination
        { cout<<"Inside Derived Fun\n";};

        void sun()          // Re-Definatin
        { cout<<"Inside Derived Sun\n";};

        virtual void run()          // Definatin
        { cout<<"Inside Derived Run\n";};
};
    // 16 Bytes

int main()
{
   Base *bp = new Derived();            // Upcasting

   bp->fun();       // Base Fun
   bp->gun();       // Base Gun
   bp->sun();       // Derived Sun
   // bp->run();       // Error
    
    return 0;
}