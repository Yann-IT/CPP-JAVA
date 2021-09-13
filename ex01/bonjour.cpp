#include <iostream>
#include <string>
 

void displayName(std::string name){
    std::cout << "Bonjour, "+name+" comment allez vous ?\n";
}

int main(){
    std::string name;
    std::cout << "Name : \n";
    std::cin >> name;
    displayName(name);
    return 0;
}