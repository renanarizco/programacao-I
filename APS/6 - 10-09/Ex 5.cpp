#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mes;

void verificarMes()
{
	printf("Informe um m�s em n�meros: ");
	scanf("%i", &mes);
	system("cls");
	
	switch(mes)
	{
		case 1:
			printf("O m�s informado �: Janeiro");
			break;
		case 2:
			printf("O m�s informado �: Fevereiro");
			break;
		case 3:
			printf("O m�s informado �: Mar�o");
			break;
		case 4:
			printf("O m�s informado �: Abril");
			break;
		case 5:
			printf("O m�s informado �: Maio");
			break;
		case 6:
			printf("O m�s informado �: Junho");
			break;
		case 7:
			printf("O m�s informado �: Julho");
			break;
		case 8:
			printf("O m�s informado �: Agosto");
			break;
		case 9:
			printf("O m�s informado �: Setembro");
			break;
		case 10:
			printf("O m�s informado �: Outubro");
			break;
		case 11:
			printf("O m�s informado �: Novembro");
			break;
		case 12:
			printf("O m�s informado �: Dezembro");
			break;
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	verificarMes();
	
}
