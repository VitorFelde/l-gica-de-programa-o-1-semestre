#include <stdio.h>

int main () {

int num;

printf ("Digite o número desejado: ");
scanf ("%d", &num);

if (num == 0){
printf ("O resultado é nulo");}

else if (num > 0) {
printf ("O número é positivo");}

else if (num < 0){
printf ("O número é negativo");}

return 0;
}
