import java.util.*;
public class TailleDuDernierMot {
    public static ArrayList<Object> lastWord(String string){
        int i;
        for (i= string.length()-1; i >= 0; i--) {
            if(string.charAt(i)==' '){
                break;
            }
        }
        ArrayList<Object> myArrayList = new ArrayList<>();
        String newString =string.substring(i+1);
        myArrayList.add(newString);
        myArrayList.add(newString.length());
        return myArrayList;
    }
    public static void main(String[] args) {
        if(args.length <1){
            System.out.println("\033[31mNombre d'arguments invalide \033[00m");
            return;
        }
        ArrayList<Object> string = lastWord(args[args.length-1]);
        System.out.println(string);
    }
}
