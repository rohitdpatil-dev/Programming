class Base
{
    public int i,j;

    public Base()



}

class Derivred extends Base
{

}
class Single {
    public static void main (String A[])
    {
        System.out.println("Inside main");
        
        Derived dobj = new Derived();
        System.out.println(dobj.i);
        System.out.println(dobj.j);
        System.out.println(dobj.x);
    }
}




// Compile : javac Single.java
// Run : java Single


// Compile + Run : java Single.java