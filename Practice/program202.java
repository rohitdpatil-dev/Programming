import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        char Arr[] = {'#', '$'};

        for(int i = 1; i <= iRow; i++)
        {
            for(int j = 1; j <= iCol; j++)
            {
                System.out.print(Arr[i % 2] + "\t");
            }
            System.out.println();
        }
    }
}

class Program202
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Rows : ");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter number of Columns : ");
        int iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iValue1, iValue2);
    }
}