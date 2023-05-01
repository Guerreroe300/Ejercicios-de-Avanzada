#include <iostream>

int main(int args, const char * argv[])
{
    int* puntero;
    int a{ 10 };
    puntero = &a;
    std::cout << "Direccion de a: " << &a << std::endl;
    std::cout << "puntero: " << puntero << std::endl;
    std::cout << "valor del puntero: " << *puntero << std::endl;

    return 0;
}
