#include <iostream>
using namespace std;
class Marvellous
{
    //Access specifier (By defalt private)
    int No1,No2;        //Characteristics

    void Fun()          //Behaviour
    {
        cout<<"Inside Fun\n";
    }

     void Gun()          //Behaviour
    {
        cout<<"Inside Gun\n";
    }
};


int main()
{
   Marvellous mobj1;
   Marvellous mobj2;

   cout<<sizeof(mobj1)<<"\n";
   
   cout<<mobj1.No1<<"\n";               //Error1

   mobj1.Fun();                         //Error2
   mobj2.Fun();                         //Error3     
   
   mobj1.Gun();                         //Error4
    return 0;
}