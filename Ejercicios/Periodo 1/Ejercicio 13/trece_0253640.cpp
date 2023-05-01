/*
Sacar el menor de 10 numeros dados
0253640 Alejandro Guerrero Alvarez
*/

#include <iostream>

int main(int args, const char* argv[]){
    float numeros[10];

    for(int i = 0; i < (sizeof(numeros)/sizeof(float)); i++){
        std::cout << "Introducir numero " << (i+1) << ": ";
        std::cin >> numeros[i];
        std::cout << std::endl;
    }

    int temp;
    for(int i = 0; i < (10 - 1); i++){
        for(int j = 0; (j < 10 - 1 - i); j++){
            if(numeros[j] > numeros[j + 1]){
                temp = numeros[j + 1];
                numeros[j + 1] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    std::cout << "El menor numero fue: " << numeros[0] << std::endl;
}