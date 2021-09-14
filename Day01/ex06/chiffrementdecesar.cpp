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
    newvalue=floor(value % (max-min +1) + min);
    return newvalue;
}

std::string cesar(std::string string, int key){
    for (int i = 0; string[i]; i++)
    {
        string[i]=char(interval(ord(string[i]+key), (int)'a', (int) 'z'));
    }
    return string;
}

int main(){
    std::cout << cesar("abc", 1) << std::endl;
    return 0;
}