#include <iostream>
#include <string>
 

void displayName(std::string name){
    std::cout << name+", enchanté moi c'est James, James Bond.\n";
}

int main(){
    std::string name;
    std::cout << "Bonjour, quel est votre prénom ?\n";
    std::cin >> name;
    displayName(name);
    return 0;
}