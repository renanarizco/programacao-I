#include <stdio.h>

int main()
{
	int n, pular;
	printf ("Digite um numero: ");
   	scanf ("%i", &n);
   	printf ("Digite de quantos em quantos numeros vai pular: ");
   	scanf ("%i", &pular);
	int max = n;
	
	for (n = 0; n <= max; n = n + pular){
		printf("%i ", n);
	}
}
