import java.lang.Math;

public class PowerOfTwo {
    public static boolean isPowerOfTwo(int n){
        boolean bool = false;
        double result = Math.sqrt(n);
        if(result%1==0.0){
            bool=true;
        }
        return bool;
    }  
    public static void main(String[] args) {
        System.out.println((isPowerOfTwo(4)? "oui":"non"));
        System.out.println((isPowerOfTwo(9)? "oui":"non"));
        System.out.println((isPowerOfTwo(5)? "oui":"non"));

    }
}
