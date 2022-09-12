// Ejercicio #15:

// Pedir números por pantalla hasta que alguno sea mayor a 100.

#include "iostream"
using namespace std;

int main()
{
	int numero;

	do
	{
		cout << "Ingrese un numero: ";
		cin >> numero;
	}// Fin do.

	while (numero <= 100);
	system("PAUSE");
	return 0;
}// Fin int.
