#include <stdio.h>

int main () {

	float distancia, combgasto, consumo;

	printf ("Escreva a distancia percorrida em Km's:");
	scanf ("%f", & distancia);
	printf ("Escreva quanto combustivel foi gasto:");
	scanf ("%f",& combgasto);


	consumo = distancia/combgasto;
	printf("Consumo de Km/l = %f\n", consumo);

	return 0;

}
