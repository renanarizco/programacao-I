#include <stdio.h>
#include <stdlib.h>

int fib (int n){
	if (n == 0)

	return 0;
	else if (n == 1)
		return 1;
	else
		return (fib(n -1) + fib (n -2));
	}
int main (){
	int result, p = 0, i;
	fflush (stdin);
	printf ("Digite o numero: ");
	scanf ("%d", &p);
	system("cls");
	for (i = 0; i <= p; i++){
		printf ("%i", fib(i));
	}
	return 0;
}
