#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int hora, minuto, segundo;
	printf("Digite a hora: \n");
	scanf("%i", &hora);
	system ("cls");
	printf("Digite o minuto: \n");
	scanf("%i", &minuto);
	system ("cls");
	printf("Digite o segundo: \n");
	scanf("%i", &segundo);
	system ("cls");
	
	printf("O resultado e: %i:%i:%i", hora, minuto, segundo);
}
