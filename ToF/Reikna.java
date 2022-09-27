package ToF;
public class Reikna{

    private static int first(){
        return 50000 * 50000;
    }
    private static float second(){
        return (float)(1*(Math.pow(10, 20)) + ((-1*((Math.pow(10, 20)))) + 3.14));
    }
    private static long third(){
        return 5000000 * 5000000;
    }
    private static double fourth(){
        return (1*(Math.pow(10, 20)) + ((-1*((Math.pow(10, 20)))) + 3.14));
    }
    public static void main(String [] args) {
        
        System.out.println(first());
        System.out.println(second());
        System.out.println(third());
        System.out.println(fourth());
    }
}