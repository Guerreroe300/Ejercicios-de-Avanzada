/*
se puede usar esto como el menu de periodo 2
*/
#include <iostream>
#include "uno_0253640.h"

void funciones(){
    int option = -1;
    do{
        std::cout << "\nIntroducir un aopcion valida\n1) aritmetica\n2) hola?\n0) salir\nEleccion: ";
        std::cin >> option;
        switch(option){
            case 0:
                std::cout << "bye\n";
            break;

            case 1:
                aritmetica::aritmetica();
            break;

            case 2:
                std::cout << "Hola\n";
            break;
        }
    }while (option != 0);
}

int main(){
    funciones();
}