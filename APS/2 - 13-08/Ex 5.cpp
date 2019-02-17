#include <stdio.h>
#include <stdlib.h>

int main ()
{

    int escolha;
       printf ("Digite a nota para conversao\n1: A\n2: B\n3: C\n4: D\n5: F\n");
       scanf ("%i", &escolha);
       system ("cls");
       
    switch (escolha)
    {
       case 1:
          printf ("Nota entre 9.0 e 10");
        break;
       case 2:
          printf ("Nota entre 8.0 e 8.9");
        break;
       case 3:
          printf ("Nota entre 7.0 e 7.9");
        break;
       case 4:
          printf ("Nota entre 5.0 e 6.9");
        break;
       case 5:
          printf ("Nota menor que 5.0");
        break;
          
       default:
          printf ("Digite somente 1, 2 ,3 ,4 ou 5");
    }
   return 0;
}
