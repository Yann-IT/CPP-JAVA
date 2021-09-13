#include <iostream>
#include <string>

char chr(int n){
    return (char) n;
}

int ord(char c){
    return (int) c;
}

int main(){
    for (int i = ord('z'); i <= ord('a'); i++)
    {
        std::cout << chr(i);
    }
    
}