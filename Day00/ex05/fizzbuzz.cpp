#include <iostream>
#include <string>
 
std::string fizzbuzz(int n){
    std::string string = "";
    if(n%3==0){
        string+="fizz";
    }
    if(n%5==0){
        string+="buzz";
    }
    return string;
}

int main(){
    int n;
    std::cout << "Number : ?\n";
    std::cin >> n;
 
    std::cout << fizzbuzz(n);    
    return 0;
}
