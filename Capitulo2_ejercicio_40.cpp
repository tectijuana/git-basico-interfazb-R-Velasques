//Librerias
#include <iostream>
#include <cmath>
using namespace std;

/**
* Capitulo 2 el probelam numero 40
* Elaborar un programa que calcule la altura(h) para (t)segundos de un cuerpo lanzado hacia arriba a una velocidad inicial (r)
* Formula h = rt - 16t^2

**/

//FAutor	Ricardo Emmanuel Velasques Salas
//Date		22 Marzo 2022


class calcularAltura //clase 
{
public:
	void procedimiento()//metodo  publico
	{
		//creacion de variables float 
		float r, t,h;

		//captura de datos
		cout << "ingrese r: ";
		cin >> r;
		cout << "ingrese t: ";
		cin >> t;

		//variable para la elavacion 
		float pow = t* t;

		//formula
		h = (r * t) - (16 * pow);

		cout << "La respuesta es:" << h;
	}
};


int main()
{
	calcularAltura obj;//creacion de objeto tipo clase
	obj.procedimiento();//llamar el metodo de la clase 
}

