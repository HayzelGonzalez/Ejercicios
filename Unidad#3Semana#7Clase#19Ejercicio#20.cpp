// Ejercicio #20:

// Programa que muestra como imprimir un rango de n�meros en orden descendente.

#include<iostream>
using namespace std;

int main()
{
	int n1, n2, c;
	cout<<"Ingresar el primer numero: ";
	cin>>n1;
	cout<<"Ingresar el segundo numero: ";
	cin>>n2;
	c = n1;
	
	while (c > n2)
	{
		cout<< c << endl;
		c--;
	}// Fin while.
	return 0;
}// Fin int.