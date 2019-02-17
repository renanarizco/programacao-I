#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0, v1 = 0, v2 = 0;
	int array[20];
	int impar[10];
	int par[10];
	
	for (i = 0; i < 20; i++)
	{
		printf("Informe o %i° número: ", i + 1);
		scanf("%i", &array[i]);
		
		if(array[i] % 2 == 0)
		{
			par[v1] = array[i];	
			v1++;
		}
		else
		{
			impar[v2] = array[i];
			v2++;	
		}
	}
	
	system("cls");
	
	printf("Números pares:\n");
	
	for (i = 0; i < 10; i++)
	{
		printf("%i\n", par[i]);
	}
	
	printf("\nNúmeros ímpares:\n");
	
	for (i = 0; i < 10; i++)
	{
		printf("%i\n", impar[i]);
	}
}
	
