#include <iostream>
int search(int* array, int c, int len){
    for (int i = 0; i < len; i++)
    {
        if(array[i]==c){
            return i;
        }
    }
    return -1;
    
}

int smallest(){
    /*[ 5, 7, 1, 1, 2, 3, 22]
    [1,1,2,3,5,7,22]
    1
    2
    3
    3+1
    5
    5+1
    7
    7+1
    7+2
    7+3
    7+3+1
    7+5
    7+5+1
    7+5+2
    7+5+3
    7+5+3+1
    7+5+3+2
    7+5+3+2+1
    7+5+3+2+1+1
    ! 20
    22*/


    int len=3;
    int array[3] = {1,2,5};

    //int len = 7;
    //int array[7] = {1,1,2,3,5,7,22};


    bool doable = true;
    int i=0;
    while(doable){
        int tosearch = array[i]-array[i-1];

        if(tosearch !=0 && tosearch!= array[i] && !search(array, tosearch, len)){
            int c=0;
            for (int j = 0; j < i-1; j++)
            {
                c+=array[j];
            }
            
            std::cout << c;
        }
        i++;
    }
    

}

int main(){
    std::cout << "Exercice non terminé";
    return 0;
}