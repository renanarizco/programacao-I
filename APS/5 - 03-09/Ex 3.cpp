#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int linha, coluna;
	int auxiliar = 0;
	int matriz[10][10];
	
	for (linha = 0; linha < 10; linha++)
	{
		for (coluna = 0; coluna < 10; coluna++)
		{
			printf("Informe um valor para a posição: [%i X %i]\n", linha + 1, coluna + 1);
			scanf("%i", &matriz[linha][coluna]);
			system("cls");
		}
	}
	
	printf("Informe um valor para verificar se está na matriz: ");
	scanf("%d", &auxiliar);
	
	for (linha = 0; linha < 10; linha++)
	{
		for (coluna = 0; coluna < 10; coluna++)
		{
			if (auxiliar == matriz[linha][coluna]) 
			{
				printf("O valor informado esta na posição: [%i X %i]\n", linha + 1, coluna + 1);
			}
			else
			{
				printf("O valor informado não esta na posição: [%i X %i]\n", linha + 1, coluna + 1);
			}
		}
	}
}
