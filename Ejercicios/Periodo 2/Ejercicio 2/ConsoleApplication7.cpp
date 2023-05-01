#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <cstring>
#define MAX 100

struct Persona
{
	char nombre[MAX];
	char apellidoPaterno[MAX];
	char apellidoMaterno[MAX];
};

int main(int args, const char* argv[])
{
	struct Persona persona;
	std::strcpy(persona.nombre, "juan");
	std::strcpy(persona.apellidoPaterno, "Perez");
	std::strcpy(persona.apellidoMaterno, "Perez");
	std::cout << "nombre: " << persona.nombre << " " << persona.apellidoPaterno
		<< " " << persona.apellidoMaterno << std::endl;;
	return 0;
}