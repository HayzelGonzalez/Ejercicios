// Ejemplo 2:

// Cuando esta instrucción while comienza a ejecutarse, el valor de producto es 3. 
// Cada repetición de la instrucción while multiplica a producto por 3, por lo que producto toma los valores de 9, 27, 81 y 243, sucesivamente.
// Cuando producto se vuelve 243, la condición de la instrucción while (producto <= 100) se torna falsa. Esto termina la repetición, por lo que el valor final de producto es 243. 
// En este punto, la ejecución del programa continúa con la siguiente instrucción después de la instrucción while.


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
