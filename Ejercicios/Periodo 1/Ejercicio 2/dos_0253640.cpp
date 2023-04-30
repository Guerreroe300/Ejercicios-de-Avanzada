/*
Esta es la estructura general de un programa en c++
0253640 Alejandro Guerrero Alvarez
*/
#include <iostream>

int main(int args, const char* argv[]){
    int ejemploInt = 23;
    char ejemploChar = 'a';
    bool ejemploBool = true;
    float ejemploFloat = 2.3;

    std::cout << "Ejemplo de Int: " << ejemploInt << std::endl;
    std::cout << "Tamaño de Int: " << sizeof(int) << std::endl;

    std::cout << "\nEjemplo de Char: " << ejemploChar << std::endl;
    std::cout << "Tamaño de Char: " << sizeof(char) << std::endl;

    std::cout << "\nEjemplo de Bool: " << ejemploBool << std::endl;
    std::cout << "Tamaño de Bool: " << sizeof(bool) << std::endl;

    std::cout << "\nEjemplo de Float: " << ejemploFloat << std::endl;
    std::cout << "Tamaño de Float: " << sizeof(float) << std::endl;
    return 0;
}