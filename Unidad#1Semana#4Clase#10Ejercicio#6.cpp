// Ejercicio #6:

// Se cargan por teclado tres números distintos. Mostrar por pantalla el mayor de ellos.

#include <iostream>
using namespace std;

int main()
{
	int numero1, numero2, numero3;
	cout << "Ingrese el primer numero: ";
	cin >> numero1;
	cout << "Ingrese el segundo numero: ";
	cin >> numero2;
	cout << "Ingrese el tercer numero: ";
	cin >> numero3;

	if (numero1 > numero2 && numero1 > numero3) 
	{
	cout << "El numero mayor es: " << numero1 << endl;
	}// Fin if.
	
	else if (numero2 > numero1 && numero2 > numero3)
	{
	cout << "El numero mayor es: " << numero2 << endl;
	}// Fin else if.
	
	else if (numero3 > numero1 && numero3 > numero2)
	{
	cout << "El numero mayor es: " << numero3 << endl;
	}// Fin else if.
	
	else
	{
	cout << "Los numeros son iguales" << endl;
	}// Fin else.
}// Fin int.
