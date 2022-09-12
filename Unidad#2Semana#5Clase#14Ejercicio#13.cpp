// Ejercicio #13:

// Crear una función que permita leer el valor correspondiente a una distancia en millas y las visualice expresadas en kilómetros. 
// Sabiendo que 1 milla equivale a 1.60934 kilómetros.

#include <iostream>
using namespace std;

float convertirkilometro (float milla)
{
	double kilometro = milla * 1.60934;
	return kilometro;
}// Fin float.

int main()
{
	double milla;
	cout << "Ingrese la cantidad en millas: " << endl;
	cin >> milla;
	cout << "La cantidad en kilometros es: " << convertirkilometro (milla);
	return 0;
}// Fin int.
