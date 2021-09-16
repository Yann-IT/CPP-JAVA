public class Sqrt {
    public static void sqrt(int n){
        if(n<0){
            System.out.println("Nombre invalide");
            return;
        }
        if(n==1){
            System.out.println("Result: "+1);
            return;
        }
        double result;
	    double squareRoot = n / 2;

        do {
            result = squareRoot;
            squareRoot = (result + (n / result)) / 2;
        } while ((result - squareRoot) != 0);




        if(squareRoot%1==0.0){
            System.out.println("Result: "+((int)squareRoot));
        }
        else{
            System.out.println("la racine carrée de "+n+" est "+squareRoot+", nous tronquons pour retourner uniquement "+((int)(squareRoot-squareRoot%1)));
        }
        

    }
    public static void main(String[] args) {
        sqrt(1);
        sqrt(4);
        sqrt(10);
    }
}
