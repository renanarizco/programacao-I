#include <stdio.h>
#include <stdlib.h>

int main()
{
	int valor, indice, resultado=0;
	printf("Digite o valor para somatoria: \n");
	scanf("%i", &valor);
	system ("cls");
	
	for (indice = valor; indice > 0;indice--)
	{
		resultado = resultado + indice;
	}
	
	printf ("A somatoria e: %i", resultado);
	
}
