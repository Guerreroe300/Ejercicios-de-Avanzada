/*
Ejemplo de for while y do while
0253640 Alejandro Guerrero Alvarez
*/

#include <iostream>

int main(int args, const char* argv[]){
    for (int i = 0; i < 100; i++){
        std::cout << i << std::endl;
    }
    std::cout << std::endl;

    int operacion = 1;

    while(operacion != 0){
        std::cout << "introduce un numero entero" << std::endl;
        std::cin >> operacion;
    }

    int operacion2;
    do{
        std::cout << "introduce numero entero" << std::endl;
        std::cin >> operacion2;
    }while(operacion2 != 0);
    

}