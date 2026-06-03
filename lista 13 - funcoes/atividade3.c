/*3) Escreva uma função que calcule a área de uma circunferência.*/

#include <stdio.h>

	float calculo (float ra) {
	
	float area; 	
	
	area = (ra * ra) * 3.14;
	
	return area;
	
	}
	int main () {
		
	float raio;
	float resultado;
	
	printf ("Digite o valor do raio: ");
	scanf ("%f", &raio);	
	
	resultado = calculo(raio);
			
	printf ("Area do seu circulo = %f", resultado);
		
		return 0;
	}
