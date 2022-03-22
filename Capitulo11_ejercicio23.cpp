//Librerias
#include <iostream>


/**
* Capitulo 11 problema numero #23
* Generar un programa que de habilidad a un estudiante para ejecutar operaciones aritmeticas 
* simples (suma,renta,multiplicación y división)

**/

//FAutor	Ricardo Emmanuel Velasques Salas
//Date		22 Marzo 2022


using namespace std;



class operacionesAritmeticas
{
public:
    void procedimiento()
    {
        int opcion;
        float primero = 1;
        float segundo = 1;
        float resultado;
        cout << "Que operacion desea realizar Suma [1] Resta [2] Multiplicacion [3] Division [4]." << endl;
        cin >> opcion;
        cout << "Ingrese un numero: ";
        cin >> primero;
        cout << "Ingrese un numero: ";
        cin >> segundo;

        if (opcion == 1)
        {
            resultado = primero + segundo;
        }

        if (opcion == 2)
        {
            resultado = primero - segundo;
        }

        if (opcion == 3)
        {
            resultado = primero * segundo;
        }

        if (opcion == 4)
        {
            resultado = primero / segundo;
        }

        cout << resultado;
        cin.ignore();
        cin.get();
    }
};

//main
int main() 
{
    operacionesAritmeticas obj;
    obj.procedimiento();
}
