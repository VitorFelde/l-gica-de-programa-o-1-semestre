#include <stdio.h>

int main () {

float cotdolar, valdolar, conversao;

//entrada

printf ("Informe a cotação do dólar:");
scanf ("%f", &cotdolar);
printf ("Informe o valor do dólar:");
scanf ("%f", &valdolar);

//processamento

conversao = cotdolar * valdolar;

//saida

printf ("%f", conversao);

return 0;


}
