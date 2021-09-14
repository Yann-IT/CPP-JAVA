#include <iostream>
#include <string>

char chr(int n){
    return (char) n;
}

int ord(char c){
    return (int) c;
}

int main(){
    for (int i = ord('a'); i <= ord('z'); i++)
    {
        std::cout << chr(i);
    }
    
}