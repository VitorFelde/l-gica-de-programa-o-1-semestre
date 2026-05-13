/*2) Faça um programa para ler uma matriz 3x3 de valores de ponto flutuante (float) e depois
exibir uma determinada linha da matriz indicada pelo usuário.*/

#include <stdio.h>

int main () {
	
	float m[3][3];
	int linha, i, j;
	
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++){
			printf ("Digite o valor de M[%d][%d]: ", i, j);
			scanf ("%f", & m[i][j]);
		}
	
	}
		
		printf ("Digite a linha que deseja saber os valores: ");
		scanf ("%d", &linha);
		
		for (j = 0; j < 3; j++){ //so o do j pois o i que é a linha é um valor fixo, que vai ser definido pelo usuario

			printf ("[%f]", m[linha][j]); //o j nao vai ser printado pois o usario nao 

			
		}
		
		return 0;

}
