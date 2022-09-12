// Ejercicios #10:

// Crear una función que reciba un número y muestre en pantalla el perímetro y la superficie de un 
// cuadrado que tenga como lado el número que se ha indicado como parámetro.

#include <iostream>
using namespace std;

float calcularPerimetro (float); //Prototipo de función.

int main()
{
	double lado;
	cout << "Ingrese el lado del cuadrado: " << endl;
	cin >> lado;
	cout << "El perimetro del cuadrado es: " << calcularPerimetro(lado) ;
	return 0;
}// Fin int.

float calcularPerimetro (float lado)
{
	double perimetro = lado * 4;
	return perimetro;
}// Fin float.
