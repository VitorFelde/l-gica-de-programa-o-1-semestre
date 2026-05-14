#include <stdio.h>

int main () {

int número, antecessor;

printf ("Escreva o número que deseja saber o antecessor: ");
scanf ("%d", &número);

antecessor = número - 1;

printf ("O antecessor do número escolhido é: %d", antecessor);

return 0;

}
