// Ejercicio #14:

// Crear un funci�n que reciba un n�mero real y devuelva un n�mero entero con el valor: -1 si el 
// n�mero es negativo, 1 si el n�mero es positivo o 0 si es cero.

#include<iostream>
using namespace std;

int num(int a) 
{
	if (a < 0) 
	{
		return -1;
	}// Fin if.

	else if (a > 0) 
	{
		return 1;
	}// Fin else if.

	else
	{
		return 0;
	}// Fin else.
}// Fin int.

int main()
{
	int a, b;
	cout<<"\n Ingrese un numero: \n \n";
	cin>>a;
	cout<<"\n \n \n \t" <<num (a);
	
	return 0;
}// Fin int.
