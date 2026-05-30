class Base
{
    public int i;
    

    public Base()
    {
        system.out.println("Inside Base Constructor");
        this.i = 11;
      

    }
    
    }
    public void fun()
    {
        system.out.println("Inside Base fun");
    }
}

class Derived extends Base
{
    public int i;

    public Derived()
    {
        system.out.println("Inside Derived Constructor");
        this.i = 21;
    }

    protected void finalize()
    {
        system.out.println("Inside finalize Method of Base");
    }

    public void gun()
    {
        system.out.println("Inside gun of Derived");
        system.out.println("Value of i : "+i);
        system.out.println("Value of i from base: "+super.i);
        
    }
}
class ThisSuperXX
{
    public static void main(String A[])
    {
     Derived dobj = new Derived();

     
    }
}