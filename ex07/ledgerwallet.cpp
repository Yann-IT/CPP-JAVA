#include <iostream>
#include <string>

std::string coins[5] = {
    "Bitcoins",
    "Ethereums",
    "XRP",
    "Dogecoin",
    "Cardano"
};
double value[5] = {
    7.2,
    180.5,
    4500,
    17890.78,
    5783.32
};

int main(){
    double total;
    for (int i = 0; i < 5; i++){
        double n;
        std::cout << "Prix actuel du "+coins[i]+" : ?\n";
        std::cin >> n;
        total+=n*value[i];
    }
    std::cout << "Total de votre wallet : " << total << std::endl;
}
