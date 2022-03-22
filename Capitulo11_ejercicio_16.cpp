//Librerias
#include <iostream>
#include <algorithm>

using namespace std;

class MCD
{
public:
	void MCDivisor()
	{
        int num1, num2, num3, a, b, c, res;
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
        cout << "Ingrese el Tercer numero: ";
        cin >> num3;

        a = std::max(num1, num2);
        b = std::min(num1, num2);
        do {
            res = b;
            b = a % b;
            a = res;
        } while (b != 0);
        cout << "El Minimo Comun Divisor. entre " << num1 << " , " << num2 << " y " << num3 << " es: " << res;
	}
};

int main() 
{
    MCD obj;
    obj.MCDivisor();
}
