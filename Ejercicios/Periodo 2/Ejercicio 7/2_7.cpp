#include <iostream>
#include "siete_0253640.h"

int main(){
    escuela::Escuela* escuela = new escuela::Escuela;

    std::cout << "Como se llama la escuela: ";
    std::cin >> escuela->nombre;

    std::cout << "Direccion de la escuela: ";
    std::cin >> escuela->direccion;

    std::cout << "Nivel educativo de la escuela: ";
    std::cin >> escuela->nivel_educativo;

    std::cout << "Cuantos alumnos tiene: ";
    std::cin >> escuela->cantidad_alumnos;

    escuela->alumnos = new escuela::Alumno[escuela->cantidad_alumnos];

    std::cout << "\n";

    for (int i = 0; i < escuela->cantidad_alumnos; i++){
        std::cout << "Cual es el nombre del alumno " << (i + 1) << ": ";
        std::cin >> (escuela->alumnos + i)->nombre;

        std::cout << "Cual es apellido paterno del alumno " << (i + 1) << ": ";
        std::cin >> (escuela->alumnos + i)->apellido_paterno;

        std::cout << "Cual es apellido materno del alumno " << (i + 1) << ": ";
        std::cin >> (escuela->alumnos + i)->apellido_materno;

        std::cout << "Cual es la edad del alumno " << (i + 1) << ": ";
        std::cin >> (escuela->alumnos + i)->edad;

        std::cout << "Cual es el grado del alumno " << (i + 1) << ": ";
        std::cin >> (escuela->alumnos + i)->grado;

        std::cout << "Cuanas materias tiene el alumno " << (i + 1) << ": ";
        std::cin >> (escuela->alumnos + i)->cantidad_materias;

        (escuela->alumnos + i)->materias = new escuela::Materia[(escuela->alumnos + i)->cantidad_materias];

        std::cout << "\n";

        for (int j = 0; j < (escuela->alumnos + i)->cantidad_materias; j++){
            std::cout << "Cual es el nombre de la materia " << (j + 1) << ": ";
            std::cin >> ((escuela->alumnos + i)->materias + j)->nombre;

            std::cout << "Cuantos creditos es la materia " << (j + 1) << ": ";
            std::cin >> ((escuela->alumnos + i)->materias + j)->creditos;

            std::cout << "Cual es el horario de la materia " << (j + 1) << ": ";
            std::cin >> ((escuela->alumnos + i)->materias + j)->horario;

            std::cout << "Como se llama el profesor de la materia " << (j + 1) << ": ";
            std::cin >> ((escuela->alumnos + i)->materias + j)->profesor.nombre;

            std::cout << "Cual es el apellido paterno del profesor de la materia " << (j + 1) << ": ";
            std::cin >> ((escuela->alumnos + i)->materias + j)->profesor.apellido_paterno;

            std::cout << "Cual es el apellido materno del profesor de la materia " << (j + 1) << ": ";
            std::cin >> ((escuela->alumnos + i)->materias + j)->profesor.apellido_materno;

            std::cout << "\n";
        }
    }



    std::cout << "\n\n\n";
    std::cout << "Nombre de escuela: " << escuela->nombre << std::endl;
    std::cout << "Direccion de escuela: " << escuela->direccion << std::endl;
    std::cout << "Nivel de educativo de escuela: " << escuela->nivel_educativo << std::endl;
    std::cout << "Alumnos de escuela: \n\n\n";
    for (int i = 0; i < escuela->cantidad_alumnos; i++){
        std::cout << "\tNombre: " << (escuela->alumnos + i)->nombre << std::endl;
        std::cout << "\tApellido paterno: " << (escuela->alumnos + i)->apellido_paterno << std::endl;
        std::cout << "\tApellido Materno: " << (escuela->alumnos + i)->apellido_materno << std::endl;
        std::cout << "\tEdad: " << (escuela->alumnos + i)->edad << std::endl;
        std::cout << "\tGrado: " << (escuela->alumnos + i)->grado << std::endl;
        std::cout << "\tMaterias: \n";

        for (int j = 0; j < (escuela->alumnos + i)->cantidad_materias; j++){
            std::cout << "\t\tNombre: " << ((escuela->alumnos + i)->materias + j)->nombre << std::endl;
            std::cout << "\t\tCreditos: " << ((escuela->alumnos + i)->materias + j)->creditos << std::endl;
            std::cout << "\t\tHorario: " << ((escuela->alumnos + i)->materias + j)->horario << std::endl;
            std::cout << "\t\tNombre de profesor: " << ((escuela->alumnos + i)->materias + j)->profesor.nombre << std::endl;
            std::cout << "\t\tApellido paterno de profesor: " << ((escuela->alumnos + i)->materias + j)->profesor.apellido_paterno << std::endl;
            std::cout << "\t\tApellido materno de profesor: " << ((escuela->alumnos + i)->materias + j)->profesor.apellido_materno << std::endl;
            std::cout << "\n";
        }

        std::cout << "\n\n";
    }

    return 0;
}