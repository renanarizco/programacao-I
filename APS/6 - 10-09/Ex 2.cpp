#include <stdio.h>
#include <stdlib.h>

float num, maior= 0, menor= 999999999, i= 0;

void achaMaior()
{
	if(num > maior) maior = num;
}

void achaMenor()
{
	if(num < menor) menor = num;
}

int main()
{
	printf("Digite um numero:");
	scanf("%f",&num);
	system ("cls");
    
	menor = num;
	maior = num;
  
	for( i = 1; i < 10; i++ )
  	{
    	printf("Digite um numero:");
    	scanf("%f",&num);
  		system ("cls");
		achaMaior();
    	achaMenor();
  	}

  	printf ("Maior: %.2f\nMenor: %.2f",maior, menor);
}
