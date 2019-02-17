#include <stdio.h>
#include <stdlib.h>
int main ()
{

  int num;
  printf ("Digite um numero:\n");
  scanf ("%i", &num);
  system ("cls");
  num % 2;
  if (num % 2 == 0 )
    printf ("Numero par");
  else
    printf ("Numero impar");
  return 0;
}
