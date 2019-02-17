#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	
	int array[10];
	int i, aux;

	for (i = 0; i < 10; i++) 
	{
		printf("Digite um numero para o vetor: ");
		scanf("%d", &array[i]);
	}
	
	system("cls");
	
	printf("Informe um valor para verificar se está no vetor: ");
	scanf("%d", &aux);
	
	system("cls");

	for (i = 0; i < 10; i++) 
	{
		if (aux == array[i]) {
		printf("Está na posição %i\n", i);
	}

}

return 0;
}
