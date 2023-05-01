#include <iostream>

union Data{
    int num;
    char caracter;
};

int main(){
    Data data;
    data.num = 65;

    std::cout << "Data en caracter: " << data.caracter << std::endl;
    std::cout << "Data en entero: " << data.num << std::endl;
}