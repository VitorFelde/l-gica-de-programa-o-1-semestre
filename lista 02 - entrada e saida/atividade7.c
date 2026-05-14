#include <stdio.h>

int main () {

float celsius, fht, kelvin;

printf ("Escreva a temperatura em Graus Celsius: ");
scanf ("%f", &celsius);

kelvin = celsius + 273;

printf ("A temperatura em Kelvin é igual: %.1f\n", kelvin);

fht = 1.8 * (kelvin - 273) + 32;

printf ("A temperatura em Fahrenheit é: %1.f", fht);

return 0;

}
