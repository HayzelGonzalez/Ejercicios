// Ejemplo 2:

// Cuando esta instrucci�n while comienza a ejecutarse, el valor de producto es 3. 
// Cada repetici�n de la instrucci�n while multiplica a producto por 3, por lo que producto toma los valores de 9, 27, 81 y 243, sucesivamente.
// Cuando producto se vuelve 243, la condici�n de la instrucci�n while (producto <= 100) se torna falsa. Esto termina la repetici�n, por lo que el valor final de producto es 243. 
// En este punto, la ejecuci�n del programa contin�a con la siguiente instrucci�n despu�s de la instrucci�n while.


#include <iostream>
using namespace std;

int main()
{
	int producto = 3;
	
	while (producto <= 100)
	{
	producto = 3 * producto;
	}// Fin while.
	cout << "Producto es: " << producto;
}// Fin int. 
