// Ejemplo 1: 

// Si calificacion es mayor o igual a 90, las primeras cuatro condiciones ser�n true, pero s�lo se ejecutar� la instrucci�n en la parte if de la primera instrucci�n if...else. 
// Despu�s de que se ejecute esa instrucci�n, se evita la parte else de la instrucci�n if...else m�s �externa�. 

#include <iostream>
using namespace std;

int main()
{
	double calificacion;
	cout << "Ingrese la calificacion: ";
	cin >> calificacion;

	if(calificacion >= 90) // 90 o m�s recibe una "A".
	cout << "A";
	else if (calificacion > 80) // 80 a 89 recibe una "B".
	cout << "B";
	else if (calificacion >= 70) // 70 a 79 recibe "C".
	cout << "C";
	else if (calificacion >=60) // 60 a 69 recibe "D".
	cout << "D";
	else // Menos de 60 recibe "F".
	cout << "F";
}// Fin int.
