class Demo
{
    public int j;
    public final int i;

    public Demo(int a, int b)
    {
        this.i = a;
        this.j = b;
    }
}


class Final_dataX
{
    public static void main(String[] args) 
    {
        Demo dobj = new Demo(10,20);

        //dobj.i = 11;        // Not allowed
        dobj.j = 21;        // allowed
        //dobj.i++;           // Not allowed
        dobj.j++;           // allowed

    }
}
