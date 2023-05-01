/*
Ejemplo de if-else: comparar 2 numeros dados
0253640 Alejandro Guerrero Alvarez
*/

#include <iostream>

int main(int args, const char* argv[]){
    int num1;
    int num2;

    std::cout << "Numero 1: ";
    std::cin >> num1;

    std::cout << "Numero 2: ";
    std::cin >> num2;

    if (num1 >= num2){
        std::cout << "Numero 1 es mas grande o igual a 2" << std::endl;
    }
    else{
        std::cout << "Numero 2 es mas grande que 1" << std::endl;
    }
}