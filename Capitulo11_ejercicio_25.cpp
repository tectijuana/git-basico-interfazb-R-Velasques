//Librerias
#include <iostream>
#include <math.h>
using namespace std;


/**
* Capitulo 11 problema numero #25
* Escribir un programa que facilite a un estudiante la suma de números racionales

**/

//FAutor	Ricardo Emmanuel Velasques Salas
//Date		22 Marzo 2022
struct racional {
	int num, den;
};

class Datos
{
public:
	void datos()
	{
		racional suma(racional x, racional y);
		void escribir(racional x);

		racional a, b, c;

		cout << "Introduce el primer numero\n";
		cout << "\nIntroduce el numerador: ";
		cin >> a.num;
		cout << "\nIntroduce el denominador: ";
		cin >> a.den;

		cout << "\n\n\n\nIntroduce el segundo numero\n";
		cout << "\nIntroduce el numerador: ";
		cin >> b.num;
		cout << "\nIntroduce el denominador: ";
		cin >> b.den;

		c = suma(a, b);
		cout << "\n\n\n\n\n\nLa suma es el numero ";
		escribir(c);
	}
};

racional suma(racional x, racional y)
{
	racional c;

	c.num = x.num * y.den + x.den * y.num;
	c.den = x.den * y.den;

	return c;
}


void escribir(racional c)
{
	int i;
	for (i = 1; i <= c.den; i++)
	{
		if (c.num % i == 0 && c.den % i == 0)
		{
			c.num = c.num / i;
			c.den = c.den / i;
			i = 1;
		}
	}
	cout << c.num << "/" << c.den;
}


int main()
{
	//main
	Datos obj;
	obj.datos();

	return 0;
}
