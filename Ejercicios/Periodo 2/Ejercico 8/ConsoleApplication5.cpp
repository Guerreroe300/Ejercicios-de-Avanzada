#include <iostream>


//int swap(int numeroUno, int numeroDos);
//int swap(int numeroUno, int numeroDos)
//{
	//int temp{ 0 };
	//temp = numeroUno;
	//numeroUno = numeroDos;
	//numeroDos = temp;

	//return 1;
//}
int swap(int* numeroUno, int* numeroDos);
int swap(int* numeroUno, int* numeroDos)
{
	int temp = *numeroUno;
	*numeroUno = *numeroDos;
	*numeroDos = temp;
	return 1;
}

int swap(int& numeroUno, int& numeroDos);
int swap(int& numeroUno, int& numeroDos)
{
	//int temp = numeroUno;
	numeroUno ^= numeroDos;
	numeroDos ^= numeroUno;
	numeroUno ^= numeroDos;
	return 1;


}

int main(int args, const char* argv[])
{
	int algunNumero{ 100 }, otroNumero{ 10 };
	swap(algunNumero, otroNumero);
	std::cout << "Direccion de algunNumero: " << &algunNumero <<
		"\ndireccion de otroNumero " << &otroNumero <<
		"\n";

	std::cout << "algunNumero: " << algunNumero <<
		"\notroNumero " << otroNumero <<
		"\n";

	return 0;


}
