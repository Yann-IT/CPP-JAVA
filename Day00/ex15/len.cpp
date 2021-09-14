#include <iostream>
#include <string>

int length(std::string string){
    int i=0;
    while (string[i])
    {
        i++;
    }
    return i;
}

int main(){
    std::string string = "az";

    int i = length(string);

    std::cout<< "Longueur : " << i <<std::endl;
    
    return 0;
}