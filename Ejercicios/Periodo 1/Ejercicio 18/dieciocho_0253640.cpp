/*
Checa donde de un array de caracteres esta uno dado
0253640 Alejandro Guerrero Alvarez
*/
#include <iostream>
#include"index_0253640.h"

int main(){
    int tamanoDeSentence = 101;
    char sentence[tamanoDeSentence];
    char buscar;

    std::cout << "Escribir algo de max 100 chars: ";
    std::cin >> sentence;
    std::cout << "\n \n";

    std::cout << "Que char buscar: ";
    std::cin >> buscar;

    std::cout << buscar << " sale en el index: " << libreria::indexOf(sentence, buscar,tamanoDeSentence) << std::endl;
}