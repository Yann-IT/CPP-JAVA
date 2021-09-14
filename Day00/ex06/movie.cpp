#include <iostream>
#include <string>

int isEfficient(int week, int incomes, int total, int topay){
    if(total>=topay){
        return week;
        //std::cout <<  week;
    }
    total+=incomes;
    incomes=incomes*0.8;
    return isEfficient(++week, incomes, total, topay);
}

int main(){
    int n;
    std::cout << "Cost : ?\n";
    std::cin >> n;
 
    std::cout << isEfficient(0, 31000000, 0, n);    
    return 0;
}
