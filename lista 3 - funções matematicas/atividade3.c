#include <stdio.h>
#include <math.h>

int main () {

double num, baixo, cima;

printf ("Escreva o número que deseja saber o arredondamento: ");
scanf ("%lf", &num);

baixo = floor (num);
cima = ceil (num);


printf ("O arredondamento para baixo = %.1f\n", baixo);
printf ("O arredondamento para cima = %.1f", cima);

return 0;

}
