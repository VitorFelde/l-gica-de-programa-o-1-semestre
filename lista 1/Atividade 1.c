#include <stdio.h>

int main () {
//declaração de variáveis
int valora,valorb,ressoma,ressub,resmult;
float resdivisao;

//entrada

printf ("4 Operações básicas\n");
printf ("Escreva o valor de A: ");
scanf ("%d", &valora);
printf ("Escreva o valor de b: ");
scanf ("%d", &valorb);

//processamento

ressoma = valora + valorb;
ressub = valora - valorb;
resmult = valora * valorb;
resdivisao = (float) valora / valorb;

//saida

printf ("soma = %d\n", ressoma);
printf ("subtração = %d\n", ressub);
printf ("multiplicação = %d\n", resmult);
printf ("divisão = %f\n", resdivisao);

return 0;
}
