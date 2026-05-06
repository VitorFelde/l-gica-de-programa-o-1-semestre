#include <stdio.h>

int main () {

float tamanho, velocidade, tempo;

printf ("Escreva o tamanho do arquivo em bits: ");
scanf ("%f", &tamanho);
printf ("Escreva a velocidadede conexão em Bits por segundos: ");
scanf ("%f", &velocidade);

tempo = tamanho/velocidade;

printf ("O tempo para download = %f", tempo);


return 0;
}
