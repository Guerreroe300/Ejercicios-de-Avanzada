#include <iostream>

void cambio(int* num){
    *num += 11;
}

int main(){
    int a = 23;
    int* pointA = &a;

    std::cout << "a: " <<  a << std::endl;

    cambio(pointA);

    std::cout << "a: " <<  a << std::endl;
}