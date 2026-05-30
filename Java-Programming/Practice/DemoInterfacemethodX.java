interface Circle
{
    // Characteristics 
    float PI = 3.14f;

    //Behaviours
    float Area(float Radius);
    float Circumferance(float Radius);
}

class Marvellous implements Circle
{
    public float Area(float Radius)
    {
        return Circle.PI*Radius*Radius;

    }
    public float Circumferance(float Radius)
    {
        return 2*Circle.PI*Radius;
    }
}

class DemoInterfacemethodX
{
    public static void main (String A[])
    {
        // Circle cobj = new Circle------------> Not Allowed
        Marvellous mobj = new Marvellous(); 
       float Ret = 0.0f;
       
       Ret = mobj.Area(10.5f);
       System.out.println("Area is : "+Ret);

        Ret = mobj.Circumferance(10.5f);
       System.out.println("Circumference is : "+Ret);
    }
}