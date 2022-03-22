//Librerias
#include <iostream>


/**
* Capitulo 11 problema numero #9
* Elaborar un programa para generar oraciones de cuatro palabras

**/

//FAutor	Ricardo Emmanuel Velasques Salas
//Date		22 Marzo 2022

using namespace std;
class Oraciones
{
public:
    void misoraciones()
    {
        cout << "El perro esta ladrando\n";
        cout << "El Carro es rojo\n";
        cout << "El dia es soleado\n";
        cout << "La maseta esta rota\n";
    }

};

//main
int main()
{
    Oraciones obj;
    obj.misoraciones();

    return 0;
}
