#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cigarros;
	float anos, preco, total;
	
	printf ("Digite ha quantos anos voce fuma: \n");
	scanf ("%f", &anos);
	system("cls");
	
	printf ("Digite a quantidade de cigarros consumidos diariamente: \n");
	scanf ("%i", &cigarros);
	system("cls");
	
	printf ("Digite o preco de um maco de cigarro: \n");
	scanf ("%f", &preco);
	system("cls");
	
	total = (anos*365) * (cigarros) * (preco/20);
	
	printf ("Voce gastou em cigarros: %f", total);
}
