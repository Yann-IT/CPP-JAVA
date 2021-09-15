public class Classroom {
    public static void main(String[] args){
        Student jc=new Student("Jean-Claude", true);
        Student h=new Student("Henri", false);
        jc.whoAmI();
        h.whoAmI();
    }
}