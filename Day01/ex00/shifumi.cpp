#include <iostream>
#include <string>
#include <vector>

void round(int playerwin, int aiwin);

std::string name(){
    std::string playername;
    std::cout << "Name : \n";
    std::cin >> playername;
    return playername;
}
void restart(){
    int choice;
    std::cout << "1 - Restart \n 2 - Stop \n";
    std::cin >> choice;

    if(choice==1){
        round(0,0);
    }
}
void scoredisplay(std::string name, int player, int ai){
    std::cout << name << " : " << player << " - AI : " << ai << std::endl;
}
void endofgame(int playerwin, int aiwin){
    if(playerwin==3 || aiwin==3){
        std::string playername;
        playername = name();
        scoredisplay(playername, playerwin, aiwin);
        restart();
    }else{
        round(playerwin, aiwin);
    }
}
void round(int playerwin, int aiwin){
    int AIplay = rand()%3 +1; 
    int play;
    std::cout << "1 - Pierre \n2 - Feuille \n3 - Ciseaux \n";
    std::cin >> play;

    std::cout << "AI play : " << AIplay << std::endl;
    if((play+1)%3 == AIplay){
        //ai won
        std::cout << "AI win the round \n";
        aiwin++;
        
    }else if((AIplay+1)%3 == play){
        //player won
        std::cout << "Player win the round \n";
        playerwin++;
    }else{
        //match nul
        std::cout << "Match nul \n";
    }

    endofgame(playerwin, aiwin);

}

int main(){
    round(0,0);
}