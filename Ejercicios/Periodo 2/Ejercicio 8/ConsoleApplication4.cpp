#include <iostream>

struct Persona
{
    std::string nombre;
    int edad;
    float altura;
    std::string curp;
    std::string direccion;
    std::string fechaNacimiento;
};

void copy(Persona* from, Persona* to) {
    *to = *from;
}


int main(int args, const char* argv[])
{
    struct Persona* personas, * personasCopia;
    int n{ 0 };


    std::cout << "Ingrese el número de personas: ";
    std::cin >> n;

    personas = new Persona[n];
    personasCopia = new Persona[n];
    for (int i = 0; i < n; i++)
    {
        std::cout << "Ingrese el nombre de la persona " << (i + 1) << ":";
        std::cin >> (personas + i)->nombre;

        std::cout << "Ingrese la edad de la persona " << (i + 1) << ":";
        std::cin >> (personas + i)->edad;

        std::cout << "Ingrese la altura de la persona " << (i + 1) << ":";
        std::cin >> (personas + i)->altura;

        std::cout << "Ingrese el curp de la persona " << (i + 1) << ":";
        std::cin >> (personas + i)->curp;

        std::cout << "Ingrese la direccion de la persona " << (i + 1) << ":";
        std::cin >> (personas + i)->direccion;

        std::cout << "Ingrese la fecha de nacimiento de la persona " << (i + 1) << ":";
        std::cin >> (personas + i)->fechaNacimiento;
    }

    copy(personas, personasCopia);

    std::cout << "El nombre de la persona es: " << personas->nombre << "\n";
    std::cout << "El nombre de la copia es: " << personas->nombre;

    delete[]personas;
    delete[]personasCopia;

    return 0;

}

