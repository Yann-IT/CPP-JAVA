public class Movies {
        public static void main(String[] args) {
            String[] movies = {"Indiana Jones et le Royaume du Crâne de Cristal", "Indiana Jones et la Dernière Croisade", "Indiana Jones et le Temple maudit"};
            
            String[][] actors = {{"Harrison Ford", "Karen Allen", "Shia LaBeouf"}, {"Harrison Ford", "Sean Connery", "Denholm Elliott"}, {"Harrison Ford", "Kate Capshaw", "Jonathan Ke Quan"}};
            
            for (int i = 0; i < movies.length; i++) {
                System.out.print("Dans le film "+movies[i]+", les principaux acteurs sont : ");
                for (int j = 0; j < actors[i].length; j++) {
                    String string;
                    if(j!=actors[i].length-1){
                        string = ", ";
                    }else{
                        string= ".\n";
                    }
                    System.out.print(actors[i][j]+string);
                }
            }   
        
        }
}
