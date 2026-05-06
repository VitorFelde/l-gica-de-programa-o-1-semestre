#include <stdio.h>
#include <math.h>

int main () {

double x, raiz;

printf ("Escreva o número que deseja saber a raiz quadrada: ");
scanf ("%lf", &x);

raiz = sqrt (x);

printf ("Resultado = %.0f", raiz);

return 0;

}
