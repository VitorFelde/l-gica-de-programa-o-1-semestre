#include <stdio.h>

int main () {

int num;

printf ("Digite o número desejado: ");
scanf ("%d", &num);

if (num % 3 == 0) {
printf ("O número é múltiplo de 3");}

else {
printf ("O número não é múltiplo de 3");}

return 0;
}
