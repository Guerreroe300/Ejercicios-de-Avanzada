#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#define MAX 100

struct Vehiculo {
	char marca[MAX] = { '\0' };
	char Modelo[MAX] = { '\0' };
	char año[MAX] = { '\0' };
	char Ruedas[MAX] = { '\0' };
	char kilometraje[MAX] = { '\0' };
	char color[MAX] = { '\0' };
	char placa[MAX] = { '\0' };
};

int main(int args, const char* argv[]) {
	struct Vehiculo coche[10];

	//

	std::cout << "Ingrese la marca: ";
	std::cin >> coche[0].marca;
	std::cout << "La marca es: " << coche[0].marca;
	std::cout << "Ingrese el modelo: ";
	std::cin >> coche[0].Modelo;
	std::cout << "La marca es: " << coche[0].Modelo;
	std::cout << "Ingrese la marca: ";
	std::cin >> coche[0].año;
	std::cout << "La marca es: " << coche[0].año;
	std::cout << "Ingrese la marca: ";
	std::cin >> coche[0].Ruedas;
	std::cout << "La marca es: " << coche[0].Ruedas;
	std::cout << "Ingrese la marca: ";
	std::cin >> coche[0].kilometraje;
	std::cout << "La marca es: " << coche[0].kilometraje;
	std::cout << "Ingrese la marca: ";
	std::cin >> coche[0].color;
	std::cout << "La marca es: " << coche[0].color;
	std::cout << "Ingrese la marca: ";
	std::cin >> coche[0].placa;
	std::cout << "La marca es: " << coche[0].placa;

	return 0;

}

