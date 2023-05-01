#include <iostream>

void cambio(int& num){
    num += 11;
}

int main(){
    int a = 23;

    std::cout << "a: " <<  a << std::endl;

    cambio(a);

    std::cout << "a: " <<  a << std::endl;
}