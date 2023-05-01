/*
Sacar el promedio de un array de 10 numeros
0253640 Alejandro Guerrero Alvarez
*/

#include <iostream>

float suma(float arr[]){ //Estrictamente array de 10 espacios
    float suma;
    for(int i = 0; i < 10; i++){
        suma += arr[i];
    }
    return suma;
}

float promedio(float arr[]){ //Estrictamente array de 10 espacios
    float sum = suma(arr);
    sum /= 10;
    return sum;
}

int main(int args, const char* argv[]){
    float numeros[10];

    for(int i = 0; i < (sizeof(numeros)/sizeof(float)); i++){
        std::cout << "Introducir numero " << (i+1) << ": ";
        std::cin >> numeros[i];
        std::cout << std::endl;
    }


    std::cout << "El promedio es: " << promedio(numeros) << std::endl;
}