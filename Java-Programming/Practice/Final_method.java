class Demo
{
    public void fun()
    { System.out.println("Inside Demo fun.");}

    public final void gun()
    { System.out.println("Inside Demo gun.");}
}

class Hello extends Demo
{
    public void gun()
    { System.out.println("Inside Hello gun");}
}

class Final_method
{
    public static void main(String[] args) 
    {
        Hello hobj = new Hello();

    }
}
