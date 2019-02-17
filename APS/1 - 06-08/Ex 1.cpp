#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int n1, n2, resultado;
	printf("Digite um numero: \n");
	scanf("%i", &n1);
	system("cls");
	
	printf("Digite outro numero: \n");
	scanf("%i", &n2);
	system("cls");
	
	resultado = n1 + n2;
	printf("Resultado: %i + %i = %i", n1, n2, resultado);
}
