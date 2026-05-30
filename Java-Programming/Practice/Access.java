class Demo 
{
    public int i;
    int j;
    protected int k;

    public Demo()
    {


    }

    public void Display()
    {
        System.out.println("Value of i: "+ i);
        System.out.println("Value of j: "+ j);
        System.out.println("Value of k: "+ k);
    }
}


class Access 
{
    public static void main(String A[])
    {
        Demo dobj = new Demo();

        dobj.Display();

        System.out.println("Value of i: "+ dobj.i);
        System.out.println("Value of j: "+ dobj.j);
        System.out.println("Value of k: "+ dobj.k);
    }
    
}
