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

void copy(Persona* from, Persona* to){
    *to = *from;
}

int main(){
    Persona *personas1, *personas2;
    int numPersonas;
    
    std::cout << "Cuantas persona quiere: ";
    std::cin >> numPersonas;

    personas1 = new Persona[numPersonas];
    personas2 = new Persona[numPersonas];


    for (int i = 0; i < numPersonas; i++){
        std::cout << "Como se llama persona " << (i + 1) << ": ";
        std::cin >> (personas1 + i)->nombre;

        std::cout << "Que edad tiene la persona " << (i + 1) << ": ";
        std::cin >> (personas1 + i)->edad;

        std::cout << "Que altura tiene la persona " << (i + 1) << ": ";
        std::cin >> (personas1 + i)->altura;

        std::cout << "Cual es el curp de la persona " << (i + 1) << ": ";
        std::cin >> (personas1 + i)->curp;

        std::cout << "Cual es la direccion de la persona " << (i + 1) << ": ";
        std::cin >> (personas1 + i)->direccion;

        std::cout << "Cuando nacion la persona " << (i + 1) << ": ";
        std::cin >> (personas1 + i)->fechaNacimiento;

        std::cout << "\n\n";
    }


    for(int i = 0; i < numPersonas; i++){
        copy(personas1 + i,personas2 + i);
    }

    personas1->nombre = "AAA";

    std::cout << "Persona 1.1 nombre: " << personas1->nombre << "\tPersona 2.1 nombre: " << personas2->nombre << std::endl;

    delete[] personas1;
    delete[] personas2;
    return 0;
}