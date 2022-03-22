//Librerias
#include <iostream>
#include <algorithm>

/**
* Capitulo 11 problema numero #11
* Correr un progrma que facilite la obtencion del minimo comun denominados de dos numeros

**/

//FAutor	Ricardo Emmanuel Velasques Salas
//Date		22 Marzo 2022
using namespace std;

class MCM
{
public:
    void procedimiento()
    {
        int num1, num2, mcm, min;
        cout << "Ingrese el primer numero: \n";
        cin >> num1;
        cout << "Ingrese el segundo numero: \n";
        cin >> num2;
        min = std::min(num1, num2);
        for (int i = 1; i <= min; i++) {
            if (num1 % i == 0 && num2 % i == 0) {
                int mcd = i;
                mcm = (num1 * num2) / mcd;
            }
        }
        cout << "El Minimo comun multiplo entre " << num1 << " y " << num2 << " es: " << mcm;
    }
};


int main() 
{
    //main
    MCM obj;
    obj.procedimiento();
}
