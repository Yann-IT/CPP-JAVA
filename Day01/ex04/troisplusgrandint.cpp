#include <iostream>
#include <vector>

std::vector<int> after(std::vector<int> array, int el){
    std::vector<int> after;

    for (int i = el; i < array.size(); i++)
    {
        after[i-el]=array[i];
    }
    
    return after;

}
void sort(std::vector<int> array){}

void display(std::vector<int> array){
    for (int i = 0; i < array.size(); i++)
    {
        std::cout << array[i];
    }
    
}
int main(){
    int array[6] = {141, 78, 12, 1, 32, '\0'};
    std::vector<int> newarray;
    for (int i = 0; array[i]; i++)
    {
        newarray.push_back(array[i]);
    }

    sort(newarray);

    display(after(newarray, newarray.size()-3));
    
}