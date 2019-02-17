#include <stdio.h>
#include <stdlib.h>

int op;
float n1, n2, resultado;

void Menu ()
{
	printf ("Digite qual operacao voce quer utilizar\n");
	printf ("1: Soma\n");
	printf ("2: Subtracao\n");
	printf ("3: Multiplicacao\n");
	printf ("4: Divisao\n");
	printf ("Qualquer outro para sair\n");
	scanf ("%i", &op);
}

void Soma()
{
	if (op == 1)
	resultado = (n1 + n2);
		
}

void Sub()
{
	if (op == 2)
	resultado = (n1 - n2);	
}

void Mult()
{
	if (op == 3)
	resultado = (n1 * n2);
}

void Div()
{
	if (op == 4)
	resultado = (n1 / n2);
}

int main()
{
	Menu();
	while (op <= 4 && op >= 1)
	{
	system ("cls");
	printf ("Digite o primeiro numero\n");
	scanf ("%f", &n1);
	system ("cls");
	printf ("Digite o segundo numero\n");
	scanf ("%f", &n2);
	system ("cls");
	Soma();
	Sub();
	Mult();
	Div();
	
	printf ("Resultado: %.1f\n", resultado);
	system ("pause");
	system ("cls");
	
	Menu();
}
}

