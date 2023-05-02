#include <iostream>

int main(){
    int n;
    std::cout << "Cuantos numeros van a ser: ";
    std::cin >> n;

    int* numeros = new int[n];

    for (int i = 0; i < n; i++){
        std::cout << "Cual es el numero " << (i + 1) << ": ";
        std::cin >> *(numeros + i);
    }

    std::cout << "Lista de numeros:\n";

    for (int i = 0; i < n; i++){
        std::cout << *(numeros + i) << std::endl;
    }
}