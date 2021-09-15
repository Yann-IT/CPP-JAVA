public class Student {
    String firstname;
    boolean aware;

    public Student(String firstname, boolean aware) {
        this.firstname = firstname;
        this.aware = aware;
    }

    public void setFirstname(String firstname) {
        this.firstname = firstname;
    }
    public void setAware(boolean aware) {
        this.aware = aware;
    }
    public String getFirstname() {
        return this.firstname;
    }
    public boolean getAware() {
        return this.aware;
    }

    public void whoAmI(){
        System.out.println("Je m'appelle "+this.firstname+" et je " +((this.aware)?"suis ":"ne suis pas ")+"aware");
    }
}