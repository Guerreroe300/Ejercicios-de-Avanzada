/*
Este programa enseña el uso basica de entrada y salida de datos
0253640 Alejandro Guerrero Alvarez
*/

#include <iostream>

int main(int args, const char* argv[]){
    char nombre[100];

    std::cout << "Cual es su nombre: ";
    std::cin >> nombre;


    std::cout << "Hola, " << nombre << std::endl;
    return 0;
}