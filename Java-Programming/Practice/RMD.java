class Base
{
    public int i,j;

    public void fun()
    { System.out.println("Inside Base Fun.");}

    public void gun()
    { System.out.println("Inside Base Gun.");}

    public void sun()
    { System.out.println("Inside Base Sun.");}
}

class Derived extends Base
{
    public int x,y;

    public void gun()
    { System.out.println("Inside Derived Gun.");}
    
    public void run()
    { System.out.println("Inside Derived Run.");}
     
}
}



class RMD
{

    public static void main(String A[])
    {
        Base bobj = new Base();

        Base bobj = new Derived();
        Derived dobj = new Derived();
        Derived dobj = new Base();
    }
}