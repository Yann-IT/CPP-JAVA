#include <iostream>
#include <time.h>

void createarray(int* array, int len){
    for (int i = 0; i < len; i++)
    {
        array[i]=rand()%20;
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
int search(int* array, int c, int len){
    for (int i = 0; i < len; i++)
    {
        if(array[i]==c){
            return i;
        }
    }
    return -1;
    
}
int main(){
    srand(time(NULL));
    int len = 5;
    int array[len];
    createarray(array, len);
    displayarray(array, len);
    int n = search(array, 2, len);
    std::cout << "Place dans l'array : "<<n<<std::endl;
}