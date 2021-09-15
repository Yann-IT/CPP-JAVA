public class ToLowerCase {

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
    public static void main(String[] args) {
        System.out.println(toLowerCase("HeLlo"));
        System.out.println(toLowerCase("wOrLd"));
    }
}
