    #include <stdio.h>
#include <math.h>

int main () {

float media;
int nota1, nota2, nota3;

printf ("Escreva o primeiro número: ");
scanf ("%d", &nota1);
printf ("Escreva o primeiro número: ");
scanf ("%d", &nota2);
printf ("Escreva o primeiro número: ");
scanf ("%d", &nota3);

media = (float) (nota1 + nota2 + nota3) / 3;

printf ("A média é: %f", media);

return 0;

}
