// Ejercicio #11:

// Usando arreglos cree un programa que rellene un array con los 100 primeros números enteros y los muestre en pantalla en orden descendente.

#include <iostream>
using namespace std;

int main()
{
	int arreglo [100];
	
	for (int i=1; i<=100; i++) 
	{
		arreglo [i-1] = i;
	}// Fin for.
	
	for (int i=99; i>=0; i--) 
	{
		cout << arreglo[i] << endl;
	}// Fin for.
	return 0;
}// Fin int.
