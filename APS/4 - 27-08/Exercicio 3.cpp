#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0;
	float media = 0;
	float array[4];
	
	for (i = 0; i < 4; i++)
	{
		printf("Informe a %i° nota: ", i + 1);
		scanf("%f", &array[i]);
	}
	
	for (i = 0; i < 4; i++)
	{
		media = media + array[i] / 4;
	}
	
	system("cls");
	
	for (i =0; i < 4; i++)
	{
		printf("- A %i° nota é: %.0f\n", i + 1, array[i]);
	}
	
	printf("\n\n");
	
	printf("A media do aluno é: %.0f", media);
}
