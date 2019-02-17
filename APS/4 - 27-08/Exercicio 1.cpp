#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0, soma = 0;
	int array[10];
	
	for (i = 0; i < 5; i++)
	{
		printf("Digite a posicao %i: " ,i);
		scanf("%i", &array[i]);
	}
	
	system("cls");
	
	for (i = 0; i < 5; i++)
	{
		soma = soma + array[i];
	}
	
	printf("O resultado da soma de todos os numeros e: %i", soma);
}
