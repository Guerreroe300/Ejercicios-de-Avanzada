/*
Aqui se prueba los diferentes operadores relacionales o de comparacion con 2 variables
0253640 Alejandro Guerrero Alvarez
*/

#include <iostream>

int main(int args, const char* argv[]){
    int a = 10;
    int b = 5;

    std::cout << "Variable a: " << a << std::endl;
    std::cout << "Variable b: " << b << std::endl;

    std::cout << "\nOperador <: " << (a < b) << std::endl; 
    std::cout << "\nOperador >: " << (a > b) << std::endl;
    std::cout << "\nOperador <=: " << (a <= b) << std::endl;
    std::cout << "\nOperador >=: " << (a >= b) << std::endl;
    std::cout << "\nOperador ==: " << (a == b) << std::endl;
    std::cout << "\nOperador !=: " << (a != b) << std::endl;

}