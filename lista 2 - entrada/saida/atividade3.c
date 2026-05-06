#include <stdio.h>

int main () {

float num1, num2, num3, num4, media;

printf ("Escreva o primeiro número: ");
scanf ("%f", &num1);
printf ("Escreva o segundo número: ");
scanf ("%f", &num2);
printf ("Escreva o terceiro número: ");
scanf ("%f", &num3);
printf ("Escreva o quarto número: ");
scanf ("%f", &num4);

media = (num1 + num2 + num3 + num4) / 4;

printf ("A média dos numeros escolhidos é: %f", media);

return 0;

}
