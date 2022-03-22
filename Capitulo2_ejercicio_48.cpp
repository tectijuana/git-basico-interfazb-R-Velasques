//Librerias
#include <cmath>
#include <iostream>


/**
* Capitulo 2 problema numero #48
* Elaborar un programa para determinar el valor absoluto de un numero

**/

//FAutor	Ricardo Emmanuel Velasques Salas
//Date		22 Marzo 2022

using namespace std;

class ValorAbsoluto
{
public:
	void Funcion()
	{
		float valor;
		cout << "Escribe un numero flotante: ";
		cin >> valor;
		float valorAbsoluto = abs(valor);
		cout << "El valor absoluto es " << valorAbsoluto;
	}
};

int main() 
{
	ValorAbsoluto obj;
	obj.Funcion();
}

