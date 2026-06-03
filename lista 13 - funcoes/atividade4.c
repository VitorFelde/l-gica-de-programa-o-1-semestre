/*4) Escreva uma função que calcule a área de uma figura retangular.*/

#include <stdio.h>

	float calculo (float b, float h) {
	
	float area; 	
	
	area = b * h;
	
	return area;
	
	}
	int main () {
		
	float resultado, altura, base;
	
	printf ("Digite o valor da altura: ");
	scanf ("%f", &altura);	
	
	printf ("Digite o valor da base: ");
	scanf ("%f", &base);
	
	resultado = calculo(base, altura);
			
	printf ("Area do seu retângulo = %f", resultado);
		
		return 0;
	}
