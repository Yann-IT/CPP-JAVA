#include <iostream>
#include <vector>

void createarray(int* array, int len){
    for (int i = 0; i < len; i++)
    {
        array[i]=    i;
    }    
}
void displayarray(int* array, int len){
    std::cout << "[ ";
    for (int i = 0; i < len; i++)
    {
        std::cout << array[i]<<", ";
    }
    std::cout << "] \n";
}

void squarearray(int* array, int len){
    std::vector<int> neg;
    std::vector<int> pos;
    for (int i = 0; i < len; i++)
    {
        if(array[i]<0){
            neg.push_back(array[i]*array[i]);
        }else{
            pos.push_back(array[i]*array[i]);
        }
    }

    int j,k;
    j=neg.size()-1;
    k=0;
    for (int i = 0; i < len; i++)
    {
        if(j>=0 && neg[j]<pos[k]){
            array[i] = neg[j];
            j--;
        }else{
            array[i] = pos[k];
            k++;
        }
    };



}
int main(){
    int len = 10;
    int array[len];
    createarray(array, len);
    displayarray(array, len);
    squarearray(array, len);
        
    displayarray(array, len);
}