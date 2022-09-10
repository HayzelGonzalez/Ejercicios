// Ejercicio #7:

// Escriba un programa que pida dos números enteros y escriba la suma de todos los enteros desde el primer número hasta el segundo.

#include <iostream>
using namespace std;

int main()
{
	int numero1, numero2, suma;
	cout << "Ingrese el primer numero: ";
	cin >> numero1;
	cout << "Ingrese el segundo numero: ";
	cin >> numero2;
	
	for (int i = numero1; i <= numero2; i++)
	{
		suma = suma + i;
	}// Fin for.
	cout << "La suma es: " << suma;
}// Fin int.
