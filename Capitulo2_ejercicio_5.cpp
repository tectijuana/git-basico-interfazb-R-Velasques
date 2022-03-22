//Librerias
#include <iostream>
#include <cmath>

/**
* Capitulo 2 el probelam numero 5
* Elaborar un programa para calcular la media aritmetica de los numeros que ingreses
	este ejemplo se elaboro con los datos 60 y 68
	
**/

//FAutor	Ricardo Emmanuel Velasques Salas
//Date		22 Marzo 2022

using namespace std;

class MediaAritmetica //clase
{
public:
	void procedimiento() //metodo que llevara acabo el procedimiento
	{
		int total;
		cout << "ingrese el total de datos: "; // cantidad de datos que se agregara
		cin >> total; //guardado en la variable de tipo int llamada total
		float aux, suma = 0;

		for (int i = 0; i < total; i++)//ciclo for
		{
			cout << "Ingrese el dato" << (i + 1) << ":";//captura de datos 
			cin >> aux;//guardado en la variable de tipo float llamada aux
			suma += aux; 
		}

		cout << "El valor de la media aritmetica es: " << (suma / total);
	}
};


int main()
{
	MediaAritmetica obj;//creacion de objeto tipo clase
	obj.procedimiento();//mandado a llamar el metodo de la clase
}

