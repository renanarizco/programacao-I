#include <stdio.h>
#include <stdlib.h>

int main ()
{
   float nota;

   printf ("Digite a nota para conversao (0 a 10)\n");
   scanf ("%f", &nota);
   system ("cls");
   if (nota >= 9 && nota <= 10)
    printf ("Nota A");

   if (nota >= 8 && nota <= 8.9)
    printf ("Nota B");

   if (nota >=7 && nota <= 7.9)
    printf ("Nota C");

   if (nota >=5 && nota <= 6.9)
    printf ("Nota D");

   if (nota < 5)
    printf ("Nota F");
	return 0;
}
