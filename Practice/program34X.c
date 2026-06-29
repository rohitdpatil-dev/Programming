/* Create a application which ask user what he wants to print and how many times using for loop.

Algorithm:
    Start
        Accept line from user as cValue
        Accept frequency from user as iValue
        Iterate the lines given by user as per frequency given by user
    Stop


*/



#include <stdio.h>

void Display (char str[], int iFreq)
{
    int iCnt = 0;

    printf("\nResult:-\n");
    for (iCnt = 1; iCnt <= iFreq; iCnt++)
    {
    
        printf("\t%s\n",str);
    }

}
int main()
{
    char Arr[50];
    int iValue = 0;

    printf("Enter the string to be repeated:\n");
    scanf("%s",Arr);

    printf("\nEnter the frequency:\n");
    scanf("%d",&iValue);

    Display(Arr,iValue);


    return 0;
}