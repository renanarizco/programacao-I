#include <stdio.h>

int main()
{
	int numero;
	printf ("Digite um numero para mostrar os pares: ");
   	scanf ("%i", &numero);
	int max = numero;
	for (numero = 1; numero <= max; numero++){
		if (numero % 2 == 0)
		printf("%i ", numero);
	}
}
