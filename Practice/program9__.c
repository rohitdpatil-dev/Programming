///////////////////////////////////////////////////////
//
// Include header files
//
//
///////////////////////////////////////////////////////


#include <stdio.h>

///////////////////////////////////////////////////////
//
//  Function name : AddTwoNumbers
//  Input:          Float, Float
//  Output:         Flaot
//  Description:    Performs addition of 2 floats
//  Date:           08/05/2026
//  Author:         Rohit Dattatray Patil
//
//
///////////////////////////////////////////////////////

float AddTwoNmbers(
                        float fValue1, 
                        float fValue2
                  )
{
    float fAns = 0.0f;
    
    fAns =  fValue1 + fValue2;

    return fAns; 
}

///////////////////////////////////////////////////////
//
//
//  Applicatin to perform Addition of two numbers.
//
//
///////////////////////////////////////////////////////



int main()
{
    float fValue1 =0.0f;            // To store first input
    float fValue2 =0.0f;            // To store second input
    float fRseult =0.0f;            // To store result

    printf("Enter first number: \n");
    scanf("%f",&fValue1);

    printf("Enter second number: \n");
    scanf("%f",&fValue2);

    fRseult =   AddTwoNmbers(fValue1,fValue2);        // Perform the addition

    printf("Addition of %f and %f is: %f",fValue1,fValue2,fRseult);

    return 0;
}

///////////////////////////////////////////////////////
//
// Input :  10.0    11.0
// Output : 21.0
//
///////////////////////////////////////////////////////
