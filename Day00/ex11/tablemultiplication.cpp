#include <iostream>
#include <string>


int main(){
    int n;
    std::cout << "Entrez un nombre \n";
    std::cin >> n;
    for (int i = 0; i <= 10; i++)
    {
        std::cout << i*n;
    }
    
    
}