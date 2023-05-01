/*
Checa si un numero es primo
0253640 Alejandro Guerrero Alvarez
*/

#include <iostream>

int main(int args, const char* argv[]){
    int n;
    
    std::cout << "introduce un numero entero: ";
    std::cin >> n;

    if (n == 0 || n == 1){
        std::cout << n << " no es primo" << std::endl;
    }
    else{
        int primo = 1;
        for(int i = 2; i <= n/2; ++i){
            if (n % i == 0){
                std::cout << n << " no es primo" << std::endl;
                primo = 0;
                break;
            }
        }
        if(primo == 1){
            std::cout << n << " es primo" << std::endl;
        }
    }
}