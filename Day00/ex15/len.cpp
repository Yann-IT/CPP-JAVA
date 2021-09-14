#include <iostream>
#include <string>

int main(){
    std::string string = "az";

    int i=0;
    while (string[i])
    {
        i++;
    }

    std::cout<< "Longueur : " << i <<std::endl;
    
    return 0;
}