import java.util.*;

class program145
{
    public static int Update(int Arr[], int iSize )
    {
        int iCnt = 0;

    for(iCnt = 0 ; iCnt< Arr[iSize] ; iCnt++)
    {
       Arr[iCnt]++;
    }
        return 0;
    }

    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        int iCnt = 0;

        int Brr[] = {10,20,30,40,50};

        System.out.println("Array element before function call: ");

        for(iCnt = 0 ; iCnt< Brr[4] ; iCnt++)
    {
        System.out.println(Brr[iCnt]);

    }

    Update(Brr, 4);

    System.out.println("Array element after function call: ");
    
    for(iCnt = 0 ; iCnt< Brr[4] ; iCnt++)
    {
        System.out.println(Brr[iCnt]);

    }

    Brr = null;
    System.gc();

    }
}