#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int op;
	float n1, n2, resultado;
	printf ("Digite qual operacao voce quer utilizar\n");
	printf ("1 para soma\n");
	printf ("2 para subtracao\n");
	printf ("3 para multiplicacao\n");
	printf ("4 para divisao\n");
	scanf ("%i", &op);
	system ("cls");
	printf ("Digite o primeiro numero\n");
	scanf ("%f", &n1);
	system ("cls");
	printf ("Digite o segundo numero\n");
	scanf ("%f", &n2);
	system ("cls");
	if (op == 1)
		resultado = (n1 + n2);
	
	
	if (op == 2)
		resultado = (n1 - n2);	
	
	
	if (op == 3)
		resultado = (n1 * n2);
	
	
	if (op == 4)
		resultado = (n1 / n2);
	
	
	printf ("Resultado: %.0f", resultado);
	return 0;
}
