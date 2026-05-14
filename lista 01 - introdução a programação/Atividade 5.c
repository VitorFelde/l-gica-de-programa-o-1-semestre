#include <stdio.h>

int main () {

int comp, larg, custo, custototal;

printf ("Escreva o comprimento da sala: ");
scanf ("%d", &comp);
printf ("Escreva a largura da sala: ");
scanf ("%d", &larg);
printf ("Escreva o preço do metro quadrado do carpete desejado: ");
scanf ("%d", &custo);

custototal = comp * larg * custo;

printf ("%d\n", custototal);

return 0;

}
