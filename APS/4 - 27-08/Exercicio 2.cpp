#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	char array[10];
	
	for (i = 0; i < 10; i++)
	{
		printf("Informe letra para a posicao %i: ", i);
		scanf("%c", &array[i]);
		fflush(stdin);
	}
	
	system("cls");
	
	printf("A sequencia inversa e: \n");
	
	for (i = 10; i >= 0; i--)
	{
		printf("%c\n", array[i]);
	}
}
