#include <iostream>
#include <string>
#include <math.h>

int countDigit(int n){
    int i = 0;
    while (n != 0)
    {
        n = n / 10;
        i++;
    }
    return i;
}

int user_input(){
    int n;
    std::cout<< "Entrez un nombre : " <<std::endl;
    std::cin >> n;
    return n;
}

bool is_armstrong(int n){
    int c=0;
    int m = n;
    while(m>0){
        c+=pow(floor(m%10),3);
        m=m/10;
    }

    return (c==n)? true : false;
}

int main(){
    int n;
    bool isArmstrong;
    n = user_input();
    isArmstrong=is_armstrong(n);
    if(isArmstrong){
        std::cout<< n<< " est un nombre Armstrong." <<std::endl;
    }else{
        std::cout<< n<< " n'est pas un nombre Armstrong." <<std::endl;
    }
}