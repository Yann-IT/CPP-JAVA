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

std::vector<int> sortArray(std::vector<int> array){
    std::vector<int> finalarray;
    int i=0;
    finalarray.push_back(array[i]);
    i++;
    while(i<array.size()){
        for(int j=0; j<finalarray.size();j++){
            if(array[i]<=finalarray[j]){
                finalarray = addat(finalarray, array[i], j);
                break;
            }else if(j==finalarray.size()-1){
                finalarray.push_back(array[i]);
                break;
            }
        }
        i++;
    }
    
    return finalarray;

}

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

    sortArray(newarray);

    display(after(newarray, newarray.size()-3));
    
}