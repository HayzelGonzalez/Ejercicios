// Ejemplo 3:

// Programa que suma 3 calificaciones.

#include <iostream>
using namespace std;

int main()
{
	double calificacion, total;
	int contador = 1;
	
	while (contador <= 3 ) 
	{// Itera 3 veces.
		cout << "Escriba una calificacion: "; // Pide la entrada.
		cin >> calificacion; // Recibe como entrada la siguiente calificación.
		total = total + calificacion; //Suma la calificación al total.
		contador = contador + 1; // Incrementa el contador por 1.
	}// Fin while.
	cout << "El total de la calificacion es: " << total;
}// Fin int.
