// Ejercicio #8:

// Desarrolle mediante una funci�n el c�digo fuente de un programa que permita ingresar un n�mero y visualizar si es par o impar.

#include <iostream>
using namespace std;

string parImpar (int num); // Prototipo de funci�n.

int main()
{
	int numero;
	string cadena;
	cout << "Ingrese el numero: ";
	cin >> numero;
	cadena = parImpar (numero);
	cout << "El numero es: " << cadena;
	return 0;
}// Fin int.

string parImpar (int num) 
{
	string resultado;
	if (num%2==0) 
	{
	resultado = "par";
	}// Fin if. 

else if (num%2==1) 
{
	resultado = "impar";
}// Fin else if.
	return resultado;
}// Fin string.
