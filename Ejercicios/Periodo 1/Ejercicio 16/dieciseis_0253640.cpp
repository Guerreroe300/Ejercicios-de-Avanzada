/*
Ejemplo de funcion
0253640 Alejandro Guerrero Alvarez
*/

#include <iostream>

int suma(int a, int b){
    return a+b;
}

int main(int args, const char* argv[]){
    int num1 = 34;
    int num2 = 20;

    std::cout << "La suma es: " << suma(num1, num2) << std::endl;
}