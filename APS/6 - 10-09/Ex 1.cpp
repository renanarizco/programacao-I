#include <stdio.h>

float nota1, nota2, nota3, nota4;

void leNota()
{
	printf("Digite a nota 1: \n");
	scanf("%f", &nota1);
	printf("Digite a nota 2: \n");
	scanf("%f", &nota2);
	printf("Digite a nota 3: \n");
	scanf("%f", &nota3);
	printf("Digite a nota 4: \n");
	scanf("%f", &nota4);
}

float calculaMedia(float n1, float n2, float n3, float n4)
{
	float med = (n1+n2+n3+n4)/4;
	return med;
}

int main()
{
	float media;

	leNota();

	media = calculaMedia(nota1, nota2, nota3, nota4);
	printf ("Media: %.2f", media);
	
}
