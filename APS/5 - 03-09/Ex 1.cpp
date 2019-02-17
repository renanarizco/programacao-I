#include <stdio.h>
#include <stdlib.h>

int main()
{
	int linha, coluna, total = 0;
	int matriz[6] [6];
	
	for (linha = 0; linha < 6; linha++)
	{
		for (coluna = 0; coluna < 6; coluna++)
		{
			printf("Informe o valor para: [%i X %i]\n", linha, coluna);
			scanf("%i", &matriz[linha] [coluna]);
			system("cls");
		}
	}
	
	system("cls");
	
	for (linha = 0; linha < 6; linha++)
	{
		for (coluna = 0; coluna < 6; coluna++)
		{
			total += matriz[linha][coluna];
		}
	}
	
	printf("A soma de todos os numeros e: %i", total);
}
