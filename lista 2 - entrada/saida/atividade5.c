#include <stdio.h>

int main () {

float produto, precopago, troco;

printf ("Escreva o valor do produto: ");
scanf ("%f", &produto);
printf ("Escreva o valor pago: ");
scanf ("%f", &precopago);

troco = precopago - produto;

printf ("O valor do troco será: %f", troco);

return 0;

}
