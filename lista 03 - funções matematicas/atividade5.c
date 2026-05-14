#include <stdio.h>
#include <math.h>

int main () {

float a, b, c, d, mediah, mediaq;

printf("Escreva o valor de A: ");
scanf("%f", &a);

printf("Escreva o valor de B: ");
scanf("%f", &b);

printf("Escreva o valor de C: ");
scanf("%f", &c);

printf("Escreva o valor de D: ");
scanf("%f", &d);

mediah = 4 / ((1/a) + (1/b) + (1/c) + (1/d));

printf("A media harmonica dos numeros escolhidos eh: %f\n", mediah);

mediaq = sqrt((a*a + b*b + c*c + d*d) / 4);

printf("A media quadratica dos numeros escolhidos eh: %f", mediaq);

return 0;
}
