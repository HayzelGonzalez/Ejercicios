// Ejercicios #10:

// Crear una funci�n que reciba un n�mero y muestre en pantalla el per�metro y la superficie de un 
// cuadrado que tenga como lado el n�mero que se ha indicado como par�metro.

#include <iostream>
using namespace std;

float calcularPerimetro (float); //Prototipo de funci�n.

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
