#include <stdio.h>

void converte (int totalMinutos, int *pH, int *pM){
  *pH = totalMinutos / 60;
  *pM = totalMinutos - (*pH * 60);
}
int main (){
  int minutos = 0, h = 0, m = 0;

  printf("Digite os minutos: \n");
  scanf("%i", &minutos);

  converte(minutos, &h, &m);

  printf("%i = > %i:%i", minutos, h , m);
}
