#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mes;

void verificarMes()
{
	printf("Informe um mês em números: ");
	scanf("%i", &mes);
	system("cls");
	
	switch(mes)
	{
		case 1:
			printf("O mês informado é: Janeiro");
			break;
		case 2:
			printf("O mês informado é: Fevereiro");
			break;
		case 3:
			printf("O mês informado é: Março");
			break;
		case 4:
			printf("O mês informado é: Abril");
			break;
		case 5:
			printf("O mês informado é: Maio");
			break;
		case 6:
			printf("O mês informado é: Junho");
			break;
		case 7:
			printf("O mês informado é: Julho");
			break;
		case 8:
			printf("O mês informado é: Agosto");
			break;
		case 9:
			printf("O mês informado é: Setembro");
			break;
		case 10:
			printf("O mês informado é: Outubro");
			break;
		case 11:
			printf("O mês informado é: Novembro");
			break;
		case 12:
			printf("O mês informado é: Dezembro");
			break;
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	verificarMes();
	
}
