#include <stdio.h>
#include <stdlib.h>

int main () {
	int i = 0;
	int array[10];
	int maior, menor;
	
	for(i = 0; i < 10; i++){
		printf("Digite o valor da posicao %d \n",i);
		scanf("%i",&array[i]);
		system("cls");
	}

	maior = array[0];
	menor = array[0];
	
	for(i = 0; i < 10; i++){
		if(array[i] > maior){
			maior = array[i];
		}
		else if(array[i] < menor){
			menor = array[i];
		}
	}	
		printf("Maior valor: %i \n", maior);
		printf("Menor valor: %i \n", menor);	
	
	
}
