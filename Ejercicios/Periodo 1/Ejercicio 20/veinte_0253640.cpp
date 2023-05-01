/*
Checa si 2 arrays son del mismo tamaño, regresando true or false
0253640 Alejandro Guerrero Alvarez
*/
#include <iostream>
#include "lenght_0253640.h"

int main(){
    char array1[] = "AAAA";
    char array2[] = "AAAA"; 

    std::cout << miLib::equalsLenght(array1, array2) << std::endl;
}