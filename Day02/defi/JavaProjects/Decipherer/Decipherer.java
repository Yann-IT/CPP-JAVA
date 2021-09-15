public class Decipherer {

    public static String decipherer(String string){
        int key = (int)string.length()/2;
        String substring = string.substring(5, 5+key);
        String replaced = substring.replace("@#?", " ");
        String finalString = new StringBuilder(replaced).reverse().toString();
        return finalString;
    }
    public static void main(String[] args) {
        System.out.println(decipherer("0@sn9sirppa@#?ia'jgtvryko1"));
        System.out.println(decipherer("q8e?wsellecif@#?sel@#?setuotpazdsy0*b9+mw@x1vj"));
        System.out.println(decipherer("aopi?sedohtém@#?sedhtmg+p9l!"));
    }
}
