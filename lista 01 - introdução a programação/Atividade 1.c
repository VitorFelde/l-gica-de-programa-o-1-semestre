#include <stdio.h>

int main () {
//declara��o de vari�veis
int valora,valorb,ressoma,ressub,resmult;
float resdivisao;

//entrada

printf ("4 Opera��es b�sicas\n");
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
printf ("subtra��o = %d\n", ressub);
printf ("multiplica��o = %d\n", resmult);
printf ("divis�o = %f\n", resdivisao);

return 0;
}
