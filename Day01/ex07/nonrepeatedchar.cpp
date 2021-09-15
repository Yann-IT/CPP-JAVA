#include <iostream>
#include <string>
#include <vector>


int isRepeated(std::string string){

    std::vector<int> singles;
    bool hasRepeat = false;

    for(int i=0; i < string.size(); i++){
        if(string[i+1] && singles.size()<2){
            for (int j = i+1; j < string.size(); j++){
                if(string[j]==string[i]){
                    hasRepeat = true;
                    break;
                }

                if(j==string.size()-1){
                    singles.push_back(i);
                }
            }
        }
        if(hasRepeat && singles.size()>=1){
            break;
        }
    }

    if(hasRepeat && singles.size()>=1){
        return singles[0];
    }
    return -1;
}

int main(){
    std::cout << isRepeated("abc") << std::endl;
    std::cout << isRepeated("abcdcaf") << std::endl;
}