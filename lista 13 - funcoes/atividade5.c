/*5) Escreva uma função que calcule a área de triângulos.*/

#include <stdio.h>

	float calculo (float b, float h) {
	
	float area; 	
	
	area = (b * h) / 2;
	
	return area;
	
	}
	int main () {
		
	float resultado, altura, base;
	
	printf ("Digite o valor da altura: ");
	scanf ("%f", &altura);	
	
	printf ("Digite o valor da base: ");
	scanf ("%f", &base);
	
	resultado = calculo(base, altura);
			
	printf ("Area do seu triângulo = %f", resultado);
		
		return 0;
	}
