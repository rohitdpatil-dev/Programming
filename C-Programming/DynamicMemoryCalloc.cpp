#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    float *Marks = NULL;
    int i = 0;

    cout<<"Enter number of elements: ";
    cin>>size;


    //Dynamic memory allocation
    Marks = new float[size];

    // float marks[5];                      // 20 bytes


    cout<<"\n\nEnter your marks: \n";

    // Iteration
    //     1    2    3
    for(i = 0; i < size; i++)
    {
        cin>>Marks[i];          // 4
    }

    cout<<"Entered marks are: \n\n\n";

     // Iteration
    //     1    2    3
    for (i = 0 ; i < size; i++)
    {
        cout<<Marks[i];          // 4
    }

    delete [] Marks;

    return 0;
}