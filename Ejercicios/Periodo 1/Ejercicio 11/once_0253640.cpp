/*
Checa si un numero es par
0253640 Alejandro Guerrero Alvarez
*/

#include <iostream>

int main(int args, const char* argv[]){
    int num = 0;

    std::cout << "Dar un numero: ";
    std::cin >> num;

    if((num % 2) != 0){
        std::cout << "El numero " << num << " es impar" << std::endl;
    }
    else{
        std::cout << "El numero " << num << " es par" << std::endl; 
    }
    return 0;

}