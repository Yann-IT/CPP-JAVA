#include <iostream>
#include <string>

int ord(char c){
    return (int) c;
}

void mult(int a, int b){
  int result = a*b;
  std::cout << "Resultat : "<<result<<std::endl;
}
void divi(int a, int b){
  int result = a/b;
  std::cout << "Resultat : "<<result<<std::endl;
}
void add(int a, int b){
  int result = a+b;
  std::cout << "Resultat : "<<result<<std::endl;
}
void sous(int a, int b){
  int result = a-b;
  std::cout << "Resultat : "<<result<<std::endl;
}

int main(){
    int a, b;
    char operation;  
    std::cout << "Entrez le calcul : \n";
    std::cin >> a >> operation >> b;

    switch (operation) {
  case '+':
    add(a,b);
    break;
  case '-':
    sous(a,b);
    break;
  case '*':
    mult(a,b);
    break;
  case '/':
    divi(a,b);
    break;
  default:
    std::cout << "Invalid\n";
    break;
}
}