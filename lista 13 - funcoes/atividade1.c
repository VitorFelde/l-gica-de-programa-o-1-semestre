/*1) Escreva uma função que retorne a soma dos n primeiros números naturais (inteiros
positivos), dado o valor de n como parâmetro*/

#include <stdio.h>

	
	int soma (int condicao) {

	int resultado = 0;

	for (int i = 0; i <= condicao; i++) {
	
	resultado = resultado + i;
	
	}
	
	return resultado;

	}

	int main () {

	int n;
	
	
	printf ("Digite um número: ");
	scanf ("%d", &n);	
		
		printf ("Resultado da soma dos números anteriores = %d", soma (n));
		
		
		return 0;

	}
