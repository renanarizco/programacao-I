#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calc_hipo(float c1, float c2)
{

float hipo;

hipo = sqrt(pow(c1,2)+pow(c2,2));

return(hipo);

}

int main()
{
float hipotenusa, cat1, cat2;

printf("Digite os valores do cateto 1: ");
scanf("%f", &cat1);
printf("Digite os valores do cateto 2: ");
scanf("%f", &cat2);

hipotenusa = calc_hipo(cat1, cat2);

printf("\n\nO valor da hipotenusa e %.1f\n\n", hipotenusa);
}
