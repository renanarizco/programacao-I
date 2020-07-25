#include <stdio.h>
#include <stdlib.h>

struct dma{
	char nome[35];
	char razao[35];
	int cnpj;
	
	
	
};
typedef dma cad;

int main()
{
	char x;
	cad p;
	
	do
	{
		printf("Digite o nome (max 35 caracteres): \n");
		gets(p.nome);
		
		fflush(stdin);
		printf("Informe a idade: \n");
		scanf("%i", &p.idade);
		
		fflush(stdin);
		printf("Informe o genero: \n");
		scanf("%c", &p.genero);
		
		printf("\nNome: %s", p.nome);
		printf("\nIdade: %i", p.idade);
		printf("\nGenero: %c", p.genero);
		
		fflush(stdin);
		printf("\n\nDeseja realizar outro cadstro? (s/n): ");
		scanf("%c", &x);
		fflush(stdin);
	}while (x != 'n');
	
}

