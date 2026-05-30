//Q1) Tula kay karaycha ahe? : Behaviour
//    Answer : Addition, Subtraction

//Q2) Tula kay lagnar ahe? : Characteristics
//    Answer : 2 numbers No1, No2

#include <iostream>
using namespace std;

class Arithmetic
{
    public:
    int No1,No2;

   Arithmetic()
   {
       No1 = 0;
       No2 = 0;
   }

   Arithmetic(int Value1,int Value2)
   {
       No1 = Value1;
       No2 = Value2;
   }

   int Addition()
   {
       int Ans = 0;
       Ans = No1 + No2;
       return Ans;
   }

    int Substraction()
    {
         int Ans = 0;
         Ans = No1 - No2;
         return Ans;
    }
};

int main()
{   
    Arithmetic aobj(11,10);
    int Result = 0;

    Result = aobj.Addition();
    cout<<"Addition is : "<<Result<<"\n";

    Result = aobj.Substraction();
    cout<<"Substraction is : "<<Result<<"\n";
    return 0;
}