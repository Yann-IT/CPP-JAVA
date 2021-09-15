import java.util.*;
public class CoucherDeSoleil {

    public static String toLowerCase(String string){
        String finalString="";
        for (int i = 0; i < string.length(); i++) {
            if((int)string.charAt(i)<97){
                finalString += (char) ((int)string.charAt(i)+97-65);
            }else{
                finalString += string.charAt(i);
            }
        }
        return finalString;
    }
    public static ArrayList<Integer> whoCanSee(String orientation, int[] immeubles){
        //couche a l'ouest;
        int max=0;
        ArrayList<Integer> list = new ArrayList<>();
        for (int i = 0; i < immeubles.length; i++) {
            if(toLowerCase(orientation) != "ouest"){
                if(immeubles[i]>max){
                    list.add(i);  
                    max=immeubles[i];
                }
            }else{
                if(immeubles[immeubles.length-i-1]>max){
                    list.add(immeubles.length-i-1);  
                    max=immeubles[immeubles.length-i-1];   
                }
            }
        }
        return list;
    }
    public static void main(String[] args) {
        int[] test= {3, 5, 4, 4, 3, 1, 3, 2};
        ArrayList<Integer> result = whoCanSee("ouest", test);
        System.out.println(result);
        
    }
}
