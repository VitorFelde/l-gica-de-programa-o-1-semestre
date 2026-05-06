#include <stdio.h>
#include <math.h>

int main () {

double num, raiz, cubo;

printf ("Digite o número desejado: ");
scanf ("%lf", &num);

if (num > 0) {
raiz = sqrt (num);

printf ("Seu resultado é igual: %.2f", raiz);}

else if (num < 0) {
cubo = pow (num, 3);

printf ("Seu resultado é igual: %.2f", cubo);}

return 0;
}
