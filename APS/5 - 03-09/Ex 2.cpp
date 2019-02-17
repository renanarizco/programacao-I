#include <stdio.h>
#include <stdlib.h>

int main()
{
	int linha, coluna;
	int auxiliar = 0;
	int maior_linha, maior_coluna;
	int menor_linha, menor_coluna;
	int matriz[5][5];
	
	for (linha = 0; linha < 5; linha++)
	{
		for (coluna = 0; coluna < 5; coluna++)
		{
			printf("Informe um valor para: [%i X %i]\n", linha + 1, coluna + 1);
			scanf("%i", &matriz[linha] [coluna]);
			if (matriz[linha][coluna] > auxiliar)
			{
				maior_linha = linha + 1;
				maior_coluna = coluna + 1;
				auxiliar = matriz[linha][coluna];
				menor_linha = linha;
				menor_coluna = coluna;
				auxiliar = matriz[linha][coluna];
			}
		}
	}
	
	printf("A posicao do maior numero e: [%i X %i]\n", maior_linha, maior_coluna);
	printf("A posicao do menor numero e: [%i X %i]\n", menor_linha, menor_coluna);
	
}
