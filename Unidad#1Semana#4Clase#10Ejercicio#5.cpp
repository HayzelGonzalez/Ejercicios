// Ejercicio 5:

// Crear un programa que pida por teclado tres notas de un alumno, calcule el promedio e imprima alguno de estos mensajes:
// - Si el promedio es >= 7 mostrar "Aprobado".
// - Si el promedio es >= 4 y <7 mostrar "Regular".
// - Si el promedio es < 4 mostrar "Reprobado".
// Recuerde que la fórmula para calcular el promedio es: Promedio = (numero1 + numero2 + numero3) /3


#include <iostream>
using namespace std;

int main()
{
	double nota1, nota2, nota3, promedio;
	cout << "Ingrese la primer nota: " << endl;
	cin >> nota1;
	cout << "Ingrese la segunda nota: " << endl;
	cin >> nota2;
	cout << "Ingrese la tercer nota: " << endl;
	cin >> nota3;
	promedio = (nota1 + nota2 + nota3)/3;
	
	if (promedio >= 7 and promedio <= 10)
	{
	cout << "Aprobado";
	}// Fin if.
	
	else if (promedio >= 4 && promedio < 7)
	{
	cout << "Regular";
	}// Fin else if.
	
	else if (promedio > 0 && promedio < 4)
	{
	cout << "Reprobado";
	}// Fin else if.
	
	else 
	{
	cout << "Nota no valida";
	}// Fin else.
}// Fin int.

