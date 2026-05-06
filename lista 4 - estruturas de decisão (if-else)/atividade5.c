#include <stdio.h>


int main () {

int num;

printf ("Digite o número desejado: ");
scanf ("%d", &num);

if (num > 10 && num < 100){
printf ("Número esta entre 10 e 100 - Intervalo permitido");}

else {
printf ("Escolha um número entre o intervalo permitido!");}

return 0;

}
