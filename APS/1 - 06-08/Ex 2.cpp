#include <stdio.h>
#include <stdlib.h>

int main()
{	
	float n1, n2, n3, n4, media;
	printf("Digite a nota 1: \n");
	scanf("%f", &n1);
	system("cls");
	
	printf("Digite a nota 2: \n");
	scanf("%f", &n2);
	system("cls");
	
	printf("Digite a nota 3: \n");
	scanf("%f", &n3);
	system("cls");
	
	printf("Digite a nota 4: \n");
	scanf("%f", &n4);
	system("cls");
	
	media = (n1 + n2 + n3 + n4) / 4;
	printf("Media: %f", media);
}
