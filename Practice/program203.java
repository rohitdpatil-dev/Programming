/*
        iRow = 4
        iCol = 4

        A   B   C   D   
        A   B   C   D   
        A   B   C   D   
        A   B   C   D   
        
        





*/


import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;
        char ch = '\0';
        for (i=1; i <= iRow ; i++)
        {
            for(j = 1 , ch='A' ; j <= iCol ; j++,ch++)
            {

                System.out.println(ch+"\t");
            }
            System.out.println();
        }
        
    }
}

class program203
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

        pobj.Display(iValue2, iValue2);
    }
}