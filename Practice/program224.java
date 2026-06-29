/*
        iRow = 4
        iCol = 4

        1
        1   2
        1   2   3
        1   2   3   4
    

*/

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;

    if (iRow != iCol)
        {
            System.out.println("Invalid parameters.");
            return;
        }

        
       
        for (i= 1; i <= iRow ; i++)
        {
            for(j = 1 ; j <= i ; j++)
            {
                System.out.print(j+"\t");            // If kadla aani tyachi conditin in for
            }
            System.out.println();
        }
        
    }
}

class program224
{

    public static void main(String[] args) 
    {
        int iValue1 = 0 ;
        int iValue2 = 0 ;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of Rows: ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of Column : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);
    }
}