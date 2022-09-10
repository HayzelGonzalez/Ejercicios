// Ejemplo 1: 

// Si calificacion es mayor o igual a 90, las primeras cuatro condiciones serán true, pero sólo se ejecutará la instrucción en la parte if de la primera instrucción if...else. 
// Después de que se ejecute esa instrucción, se evita la parte else de la instrucción if...else más “externa”. 

#include <iostream>
using namespace std;

int main()
{
	double calificacion;
	cout << "Ingrese la calificacion: ";
	cin >> calificacion;

	if(calificacion >= 90) // 90 o más recibe una "A".
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
