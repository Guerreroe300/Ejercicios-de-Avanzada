#include <iostream>
#include <cstring>
#define MAX 100

struct Persona{
    char nombre[MAX];
    char apellidoPaterno[MAX];
    char apellidoMaterno[MAX];
};

int main(){
    struct Persona persona;
    std::strcpy(persona.nombre, "Juan");
    std::strcpy(persona.apellidoPaterno, "Perez");
    std::strcpy(persona.apellidoMaterno, "Vargas");

    std::cout << "Nombre: " << persona.nombre << " " << persona.apellidoPaterno << " " << persona.apellidoMaterno << std::endl;
}