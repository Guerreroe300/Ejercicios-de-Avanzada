#include <iostream>
#include "zoo.h"

int main(int args, const char* argv[])
{
	struct Zoo* zoo;
	zoo = new Zoo;
	std::cout << "Introduzca el nombre del zologico\n";
	std::cin >> zoo->nombre;
	std::cout << "Introduzca la direccion del zoologico\n";
	std::cin >> zoo->direccion;
	std::cout << "Introduzca la cantidad de animales\n";
	std::cin >> zoo->cantidadAnimales;
	zoo->animales = new Animal[zoo->cantidadAnimales];
	for (int i = 0; i < zoo->cantidadAnimales; i++)
	{
		std::cout << "Introduzca el tipo de animal \n";
		std::cin >> (zoo->animales + i)->tipo;
		std::cout << "Introduzca el nombre del aminal \n";
		std::cin >> (zoo->animales + i)->NOMBRE;
		std::cout << "Tienes alas?\n";
		std::cin >> (zoo->animales + i)->alas;
		std::cout << "Tiene pelo?\n";
		std::cin >> (zoo->animales + i)->pelo;
		std::cout << "Ingrese el numero de patas\n";
		std::cin >> (zoo->animales + i)->patas;
	}
}
