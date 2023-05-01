#include <iostream>

struct Datos_struct
{
	int numeroUno{ 0 };
	int numeroDos{ 0 };
};

union Datos
{
	int numeroUno{ 0 };
	int numeroDos;

};

union Datos_2
{
	int numero[2] = { 0 };
	char text[8];

};

int main(int args, const char* argv[])
{
	std::cout << "tamaño union Datos: " << sizeof(Datos) << "\n";
	std::cout << "tamaño estructura Datos: " << sizeof(Datos_struct)
		<< "\n";
	std::cout << "tamaño Datos_2: " << sizeof(Datos_2) << "\n";
	// Datos datos;
	// datos.numeroUno=100
	//std::cout<<"numero dos: "<<datos.numeroDos<<"\n";
	//return 0;
	Datos_2 datos2;
	//std::cout<<"numero: "<< datos2.numero<<"\n";
	//datos2.numero[0]=0x41;
	//datos2.text[0]=0x42;
	std::strcpy(datos2.text, "abcd");
	std::cout << "texto: " << datos2.text << "\n";
	std::cout << "char [0]: " << datos2.text[0] << "\n";
	std::cout << "int: " << datos2.numero[0] << "\n";
	return 0;
}