/*
Esta biblioteca nos permite hacer diversas operaciones aritmeticas por medio de un menu
0253640 Alejandro Guerrero Alvarez
*/
#pragma once
#include <iostream>

namespace aritmetica{
    int suma(int a, int b){
        return a + b;
    }
    int resta(int a, int b){
        return a - b;
    }
    int multiplicacion(int a, int b){
        return a * b;
    }
    float division(int a, int b){
        return a / b;
    }
    int modulo(int a, int b){
        return a % b;
    }

    void leerNumeros(int &A, int &B){
        std::cout << "Primer numero: ";
        std::cin >> A;

        std::cout << "Segundo numero: ";
        std::cin >> B;
    }

    void aritmetica(){
        int elec = -1;
        int a, b;
        do{
            std::cout << "\n1) sumar\n2) restar\n3) multiplicar\n4) dividir\n5) modulo\n0) salir\nEleccion: ";
            std::cin >> elec;

            switch(elec){
                case 0:
                    std::cout << "BYe\n";
                break;
                
                case 1:
                    leerNumeros(a,b);
                    std::cout << "La suma es: " << suma(a, b) << std::endl;
                break;

                case 2:
                    leerNumeros(a,b);
                    std::cout << "La resta es: " << resta(a, b) << std::endl;
                break;

                case 3:
                    leerNumeros(a,b);
                    std::cout << "La multiplciacion es: " << multiplicacion(a, b) << std::endl;
                break;

                case 4:
                    leerNumeros(a,b);
                    std::cout << "La division es: " << division(a, b) << std::endl;
                break;

                case 5:
                    leerNumeros(a,b);
                    std::cout << "El modulo es: " << modulo(a, b) << std::endl;
                break;
            }

        }while (elec != 0);
    }
}