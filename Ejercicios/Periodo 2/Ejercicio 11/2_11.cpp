#include <iostream>
#include <string>

struct Persona{
    std::string nombre;
    int edad;
    float altura;
    std::string curp;
    std::string direccion;
    std::string fechaNacimiento;
};

void copy(Persona& from, Persona& to){
    to = from;
}

int main(){
    Persona personas1, personas2;

    std::cout << "Como se llama persona : ";
    std::cin >> personas1.nombre;

    std::cout << "Que edad tiene la persona : ";
    std::cin >> personas1.edad;

    std::cout << "Que altura tiene la persona : ";
    std::cin >> personas1.altura;

    std::cout << "Cual es el curp de la persona : ";
    std::cin >> personas1.curp;

    std::cout << "Cual es la direccion de la persona : ";
    std::cin >> personas1.direccion;

    std::cout << "Cuando nacion la persona : ";
    std::cin >> personas1.fechaNacimiento;

    std::cout << "\n\n";


    copy(personas1 , personas2);

    personas1.nombre = "AAA";

    std::cout << "Persona 1.1 nombre: " << personas1.nombre << "\tPersona 2.1 nombre: " << personas2.nombre << std::endl;
    return 0;
}