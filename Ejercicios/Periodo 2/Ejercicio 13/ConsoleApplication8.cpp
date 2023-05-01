#include<iostream>
union Datos
{
	int numeroUno;
	int numeroDos;
};

int main(int args, const char* argv[])
{
	Datos datos;
	datos.numeroUno = 10;
	std::cout << "numero guardado: " << datos.numeroUno << std::endl;
	return 0;
}