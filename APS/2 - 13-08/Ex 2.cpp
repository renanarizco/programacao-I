#include <stdio.h>
#include <stdlib.h>
int main ()
{

  int dia, mes, ano;
  printf ("Digite em sequencia o dia, mes e ano de uma data qualquer\n");
  printf ("Dia: ");
  scanf ("%i", &dia);
  printf ("Mes: ");
  scanf ("%i", &mes);
  printf ("Ano: ");
  scanf ("%i", &ano);
  system ("cls");
  if (mes < 1 || mes > 12 || dia < 1 || dia > 31 || ano < 0)
    printf ("Data invalida!");
  else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30)
    printf ("Data valida!");

  else
    printf ("Data valida!");
  return 0;
}
