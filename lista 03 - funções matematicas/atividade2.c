#include <stdio.h>
#include <math.h>

int main () {

double numero, quadrado, cubo;

printf ("Escreva o número que deseja saber o quadrado e o cubo: ");
scanf ("%lf", &numero);

quadrado = pow (numero, 2);
cubo = pow (numero, 3);

printf ("Número Quadrado Cubo\n");
printf ("%.0lf\t%.0lf\t%.0lf\t", numero, quadrado, cubo);


return 0;

}
