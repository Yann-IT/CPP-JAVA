#include <iostream>
#include <string>
#include <time.h>
#include <vector>

int random(int min, int max){
    return rand() % max + min;
}
std::vector<int> addat(std::vector<int> array, int el, int place){
    std::vector<int> finalarray;
    for (int i = 0; i < place; i++)
    {
        finalarray.push_back(array[i]);
    }
    finalarray.push_back(el);
    for (int i = place; i < array.size(); i++)
    {
        finalarray.push_back(array[i]);
    }
    return finalarray;
    
}
void displayArray(std::vector<int> array){
    std::cout << "[ ";
    for (int i = 0; i < array.size(); i++)
    {
        (i+1<array.size())?std::cout << array[i]<< ", " : std::cout << array[i];
    }
    std::cout << "] \n"<< std::endl;
}

void sortArray(std::vector<int> array){
    std::vector<int> finalarray;

    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < finalarray.size(); j++)
        {
            if(array[i]<finalarray[j]){

            }
            if(j==finalarray.size()){}
        }
        
    }
    
    displayArray(finalarray);

}

std::vector<int> createArray(std::vector<int> array){

    for (int i = 0; i < random(15,20); i++)
    {
        array.push_back(random(0, 20));
    }    
    return array;
}

int main(){
    srand(time(NULL));
    std::vector<int> array;
    array.push_back(0);
    array.push_back(1);
    array.push_back(2);

    //array = createArray(array);
    displayArray(array);
    array=addat(array, 9, 3);
    displayArray(array);
}