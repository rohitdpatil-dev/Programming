class Base
{
    public int i;
    public int j;

    public Base()
    {
        system.out.println("Inside Base Constructor");
        this.i = 0;
        this.j = 0;

    }
    protected void finalize()
    {
        system.out.println("Inside finalize Method of Base");

    }
    public void fun()
    {
        system.out.println("Inside Base fun");
    }
}

class Derived extends Base
{
    public int x;

    public Derived()
    {
        system.out.println("Inside Derived Constructor");
        this.x = 0;
    }

    protected void finalize()
    {
        system.out.println("Inside finalize Method of Base");
    }

    public void gun()
    {
        system.out.println("Inside gun of Derived");
        system.out.println("Inside gun of Derived");
    }
}
class ThisSuper
{
    public static void main(String A[])
    {
     Derived dobj = new Derived
    }
}