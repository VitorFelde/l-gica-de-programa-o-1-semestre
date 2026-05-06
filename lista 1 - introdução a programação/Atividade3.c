#include <stdio.h>

int main () {

float totvendas, result;

//entrada

printf ("Digite o total de vendas:");
scanf ("%f", &totvendas);

//processamento

result = totvendas * 0.10;
printf ("Comissão = %f\n", result);

return 0;


}
