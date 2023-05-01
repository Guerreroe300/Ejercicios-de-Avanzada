/*
Saca la frequencia de caracteres en un array de 100 maximo
0253640 Alejandro Guerrero Alvarez
*/

#include <iostream>

int main(int args, const char* argv[]){
    char caracteres[101];
    int ocurrencia[256] = {0};

    std::cout << "Dar un conjunto  de hasta 100 caracteres: ";
    std::cin >> caracteres;


    for(int i = 0; i < 101; i++){
        if (caracteres[i] == '\0'){
            break;
        }
        ocurrencia[caracteres[i]]++;
    }

    for(int i = 0; i < 256; i++){
        std::cout << "El caracter " << char(i) << " ocurre: " << ocurrencia[i] << std::endl;
    }
}