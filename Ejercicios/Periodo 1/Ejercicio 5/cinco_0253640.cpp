/*
Aqui se prueba los diferentes operadores aritmeticos con 2 variables, tambien con un ejemplo de asignacion
0253640 Alejandro Guerrero Alvarez
*/

#include <iostream>

int main(int args, const char* argv[]){
    int a = 10;
    int b = 5;

    std::cout << "Variable a: " << a << std::endl;
    std::cout << "Variable b: " << b << std::endl;

    std::cout << "\nOperador +: " << (a + b) << std::endl; 
    std::cout << "\nOperador -: " << (a - b) << std::endl;
    std::cout << "\nOperador *: " << (a * b) << std::endl;
    std::cout << "\nOperador /: " << (a / b) << std::endl;
    std::cout << "\nOperador %: " << (a % b) << std::endl;

    a -= b;
    std::cout << "\nVariable a despues de (a-=)" << a << std::endl;
}