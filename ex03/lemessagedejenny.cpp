#include <iostream>
#include <string>
 

void displayName(std::string name){
    std::string output = (name == "Johnny") ? "Hello, my love! \n" : "Salut, "+name+"! \n";

    std::cout << output;
}

int main(){
    std::string name;
    std::cout << "Bonjour, quel est votre prénom ?\n";
    std::cin >> name;
    displayName(name);
    return 0;
}