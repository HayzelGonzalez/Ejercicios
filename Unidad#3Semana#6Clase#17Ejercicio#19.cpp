// Ejercicio #19:

// Usar la instrucci�n foreach para contar el n�mero de vocales en una matriz char.

#include <iostream>
using namespace std;

int main() 
{
	char charArr[] = {'e', 'l', 'e', 'm', 'e', 'n', 't', 'o', 'c', 'h', 'a', 'r'};
	int vowels = 0;

	for (char ch: charArr) 
	{
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		vowels++;
	}// Fin for.
	cout << vowels;
}// Fin int.
