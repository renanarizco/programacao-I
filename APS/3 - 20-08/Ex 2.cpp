#include <stdio.h>
#include <stdlib.h>

int main()
{
int fatorial, numero;
printf("Insira um valor para o qual deseja calcular seu fatorial: ");
scanf("%d", &numero);
system ("cls");
 
for(fatorial = 1; numero > 1; numero--)
fatorial = fatorial * numero;
 
printf("Fatorial: %d", fatorial);
return 0;
}

