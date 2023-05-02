#include <iostream>
#define MAX 30

struct Perro
{
    int patas;
    int ojos;
    int color[MAX] = { '\0' };
    char raza[MAX] = { '\0' };
    void getRaza()
    {
        std::cout << raza << std::endl;
    }
};

int main(int args, const char* argv[])
{
    struct Perro perro;
    struct Perro* puntero;
    puntero = new Perro;
    puntero->patas = 4;
    std::cout << "patas: " << puntero->patas << std::endl;

    return 0;
}

int main(int args, const char* argv[])
{
    struct Perro perro;
    struct Perro* puntero;
    //puntero=new perro;
    puntero = &perro;
    puntero->patas = 4;
    std::cout << "patas: " << perro.patas << std::endl;

    return 0;
}

int main(int args, const char* argv[])
{
    struct Perro perro, perro_2;
    perro.ojos = 2;
    perro_2.patas = 4;
    struct Perro* puntero;
    //puntero=new perro;
    puntero = &perro;
    std::cout << "ojos: " << puntero->ojos << std::endl;
    puntero = &perro_2;
    std::cout << "patas: " << puntero->patas << std::endl;
    return 0;
}
