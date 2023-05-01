#pragma once

namespace escuela
{
    struct Profesor{
        char nombre[100];
        char apellido_paterno[100];
        char apellido_materno[100];

    };

    struct Materia{
        char nombre[100];
        float creditos;
        char horario[100];
        Profesor profesor;
    };

    struct Alumno{
        char nombre[100];
        char apellido_paterno[100];
        char apellido_materno[100];
        int edad;
        char grado[100];
        int cantidad_materias;
        Materia* materias = nullptr;
    };

    struct Escuela{
        char nombre[100];
        char direccion[100];
        char nivel_educativo[100];
        int cantidad_alumnos;
        Alumno* alumnos = nullptr;
    };
} 
