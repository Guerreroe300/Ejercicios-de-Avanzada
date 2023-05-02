#pragma once
#ifndef _LIBCPP_ZOO
#define _LIBCPP_ZOO
#define MAX 50
#include <iostream>

struct Animal {

	char tipo[MAX] = { '\0' };
	char NOMBRE[MAX] = { '\0' };
	bool alas{ false };
	bool pelo{ false };
	int patas{ 0 };

};

struct Zoo
{
	char nombre[MAX] = { '\0' };
	char direccion[MAX] = { '\0' };
	struct Animal* animales{ NULL };
	int cantidadAnimales{ 0 };
};

//Estructura que indica cada parte del zoologico


#endif

