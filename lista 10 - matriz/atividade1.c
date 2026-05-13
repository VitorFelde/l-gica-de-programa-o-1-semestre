/*1) Faça um programa para identificar o maior e o menor elemento de uma matriz[8][8], mostrando
os valores e a posição destes valores dentro da matriz.*/

#include <stdio.h>

int main () {
	
	int m[3][3], i,j, maior, posii = 0, posij, menor = 9999, posiimenor, posijmenor;
	
	for (i = 0; i < 3; i++) {//enquanto nao fizer 3 linhas
		for (j = 0; j < 3; j++){//enquanto nao fizer 3 colunas
			//ambas crescem, e vao sendo digitadas e armazenadas pelo usuario
			printf ("Digite o valor de M[%d][%d]: ", i, j);
			scanf ("%d", & m[i][j]);
		}
	}
		for (i = 0; i < 3; i++) 
			for (j = 0; j < 3; j++){
				if (m[i][j] > maior) { //se o valor da matriz for maior
					maior = m[i][j];
					posii = i;
					posij = j;
				}
			
				if (m[i][j] < menor) { //se o valor da matriz for menor que o menor
					menor = m[i][j];
					posiimenor = i;
					posijmenor = j;
					
					}
			}
		
	

		printf ("O maior valor é: [%d], e sua posição é: [%d][%d]", maior, posii, posij);
		printf ("\nO menor valor é: [%d], e sua posição é: [%d][%d]", menor, posiimenor, posijmenor);
	
	
	return 0;

}
