//Librerias
#include <iostream>

/**
* Capitulo 11 problema numero #1
* Elaborar un programa para dibujar un arbol de navidad
**/

//FAutor	Ricardo Emmanuel Velasques Salas
//Date		22 Marzo 2022
using namespace std;

class Myclass
{
public:
    void miarbol()//metodo publico
    {
        int acd = 1;
        for (int x = 5; x != 0; x--) {
            cout.width(x);
            for (int n = 0; n < acd; n++) {
                cout << "*";
            }
            acd += 2;
            cout << endl;
        }
        for (int x = ((acd - 2) / 2 - 3) / 2; x != 0; x--) {
            cout.width((acd * 40) / 100);
            for (int n = 0; n < (acd * 20) / 100; n++) {
                cout << "*";
            }
            cout << endl;
        }
        for (int x = 2; x != 0; x--) {
            cout.width((acd * 30) / 100);
            for (int n = 0; n < (acd * 40) / 100; n++) {
                cout << "*";
            }
            cout << endl;
        }

    }
};

//main
int main()
{
    Myclass obj;
    obj.miarbol();

    return 0;
}