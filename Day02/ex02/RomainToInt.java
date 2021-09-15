import java.util.Arrays;
public class RomainToInt {

    static String symbols = "IVXLCDM";
    static int[] values = {1, 5, 10, 50, 100, 500, 1000};


    // public static boolean verifyRomain(String string){
    //     char prev;
    //     int counter=0;
    //     for (int i = 0; i < string.length; i++) {
    //         if(!symbols.contains(string.charAt(i))){
    //             return false;
    //         }

    //         int index = symbols.indexOf(string.charAt(i));
    //         if(i!=0 && string.charAt(i)==prev){
    //             counter++;
    //         }

    //         if(string.charAt(i)!=prev && symbols.indexOf(prev)>index+1){
    //             return false;
    //         }


    //         prev= string.charAt(i);
    //     }


    //     return true;
    // }

    public static int romainToInt(String string){
        //if(!verifyRomain(string)){
        //    System.out.println("Chaine invalide");
        //    return -1;
        //}
        int c=0;
        for (int i = 0; i < string.length(); i++) {            
            int index = symbols.indexOf(string.charAt(i));
            int value = values[index];

            if(i!=string.length()-1 && value < values[symbols.indexOf(string.charAt(i+1))]){
                c-=values[string.indexOf(string.charAt(i))];
            }else{
                c+=value;
            }
        }
        return c;
    }
    public static void main(String[] args) {
        if(args.length ==0 || args.length>1){
            System.out.println("\033[31mNombre d'arguments invalide \033[00m");
            return;
        }
        System.out.println(romainToInt(args[0]));
    }
}
