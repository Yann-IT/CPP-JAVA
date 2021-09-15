#include <iostream>
#include <cmath>


char chr(int n){
    return (char) n;
}

int ord(char c){
    return (int) c;
}

int interval(int value,int min, int max){
    int newvalue;
    newvalue=floor((value-min) % (max-min +1) + min);
    return newvalue;
}

std::string cesar(std::string string, int key){
    for (int i = 0; string[i]; i++)
    {
        //std::cout <<ord(string[i]+key)<<std::endl;
        // std::cout <<interval(ord(string[i]+key), (int)'a', (int)'z')<<std::endl;
        // std::cout << char(interval(ord(string[i]+key), (int)'a', (int)'z'))<<std::endl;
        string[i]=char(interval(ord(string[i]+key), (int)'a', (int) 'z'));
    }
    return string;
}

int main(){
    std::cout << cesar("abc", 1) << std::endl;
    return 0;
}