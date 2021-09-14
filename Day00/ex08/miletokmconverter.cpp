#include <iostream>
#include <string>

int miletokm(double miles){
    double km = miles*1.60934;

    std::cout << "Distances en miles : \n";
    std::cout << miles << std::endl;
    std::cout << "Distances en km: \n";
    std::cout << km << std::endl;
}

int main(){
    double n;
    std::cout << "Distances en miles ?\n";
    std::cin >> n;
    miletokm(n);
}