#include <iostream>
#include <string>
 
void isBissextile(bool is){
    std::string string = is ? "Année bissextile" : "Année non bissextile";
    std::cout << string;
}

int main(){
    int year;
    std::cout << "Year : ?\n";
    std::cin >> year;
 
    if(year%400!=0 || (year%4!=0 && year%100==0)){
        isBissextile(false);
    }else{
        isBissextile(true);
    }
    return 0;
}
