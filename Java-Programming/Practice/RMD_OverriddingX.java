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

    public void sun()
    { System.out.println("Inside Derived Sun.");}
    
    public void run()
    { System.out.println("Inside Derived Run.");}
     
}




class RMD_OverriddingX
{

    public static void main(String A[])
    {
        Base bobj = new Derived();

        bobj.fun();             // Base Fun
        bobj.gun();             // Derived Gun
        bobj.sun();             // Derived Sun
      
       

       
    }
}