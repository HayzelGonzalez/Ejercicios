// Ejercicio #17:

// Encontrar el n�mero de n�meros pares en una matriz de enteros.

#include <iostream>
using namespace std;

int main() 
{
	int nums[] = {4, 9, 6, 72, 31, 44};
	int even = 0;

	for (int num: nums) 
	{
		if (num % 2 == 0)
		even++;
	}// Fin for.
	cout << even;
}// Fin int.
