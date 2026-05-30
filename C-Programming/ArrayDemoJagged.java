class ArrayDemoMulti
{
    public static void main(String[] args) {
        
    int Arr[][] = new int[3][];
    
    Arr[0] = new int [4];
    Arr[1] = new int [7];
    Arr[2] = new int [5];

    System.err.println(Arr.length);
    
    System.err.println(Arr[0].length);
    System.err.println(Arr[1].length);
    System.err.println(Arr[2].length);
    }
}