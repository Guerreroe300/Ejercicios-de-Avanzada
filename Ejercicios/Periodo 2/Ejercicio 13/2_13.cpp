#include <iostream>

union Datos{
    int numeroUno;
    int numeroDos;
};

int main(){
    Datos datos;
    datos.numeroUno = 20;
    std::cout << "Numero guardado: " << datos.numeroDos << std::endl;
    return 0;
}