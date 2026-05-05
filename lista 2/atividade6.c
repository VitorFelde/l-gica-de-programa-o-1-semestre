#include <stdio.h>

int main () {

float total, desconto, acrescimo;

printf ("Escreva o valor total da compra: ");
scanf ("%f", &total);

desconto = total -(total * 0.10);

printf ("Com o desconto de 10%% aplicado, a compra fica em: %f", desconto);

acrescimo = total +(total * 0.05);

printf ("Com o acréscimo de de 5%% aplicado, a compra fica em: %f", acrescimo);

return 0;

}
