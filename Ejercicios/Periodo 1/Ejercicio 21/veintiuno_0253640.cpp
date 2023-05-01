/*
Checa cuanras veces aparace un caracter dado en una cadena de caracteres
0253640 Alejandro Guerrero Alvarez
*/
#include <iostream>

int main(){
    char cadena[101];
    char buscar;
    int count = 0;

    std::cout << "Introducir hasta 100 caracteres: ";
    std::cin >> cadena;

    std::cout << "Que caracter quiere buscar: ";
    std::cin >> buscar;

    for(int i = 0; i < 101; i++){
        if(cadena[i] == '\0'){
            break;
        }
        if(cadena[i] == buscar){
            count++;
        }
    }

    std::cout << "En la cadena se encuentra " << buscar << ", " << count << " veces" << std::endl;
}