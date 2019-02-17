#include <stdio.h>
#include <stdlib.h>

int matriz[6][6], linha, coluna, somatorio;

void iniciarSomatorio()
{
	for (linha = 0; linha < 6; linha++)
	{
		for (coluna = 0; coluna < 6; coluna++)
		{
			printf("Informe um valor para: [%i X %i]\n", linha + 1, coluna + 1);
			scanf("%i", &matriz[linha] [coluna]);
			system("cls");
		}
	}			
}

void calcularSomatorio()
{
	for (linha = 0; linha < 6; linha++)
	{
		for (coluna = 0; coluna < 6; coluna++)
		{
			somatorio += matriz[linha][coluna];
		}
	}
}

int main()
{
	iniciarSomatorio();
	calcularSomatorio();
	
	system("cls");
	
	printf("O somatorio da matriz e: %i", somatorio);
	
	
}
