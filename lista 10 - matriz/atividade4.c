/*4) Faça um programa para ler os valores de uma matriz A (mxn) e determine a matriz T transposta
de A. (obs.: T[i][j] = A [j][i])*/

#include <stdio.h>

int main () {
	
	int l, d, i, j;
	
	printf ("Digite o nº de linhas: ");
	scanf ("%d", &l);
	
	printf ("Digite o nº de colunas: ");
	scanf ("%d", &d);
	
	
	int matrizA[l][d], matrizT[d][l]; //foi o jeito, desculpa
	
	for (i = 0; i < l; i++)
		for (j = 0; j < d; j++) {
			printf ("Digite o vetor na posição: [%d][%d]: ", i, j);
			scanf ("%d", &matrizA[i][j]);
		}
		
	for (i = 0; i < l; i++) {
		for (j = 0; j < d; j++) {
			matrizT[i][j] = matrizA[j][i];
		}
	}
	for (i = 0; i < l; i++) {
		for (j = 0; j < d; j++) {	
		
		printf ("%d ", matrizT[i][j]);
	}	
		printf ("\n");
	
}
return 0;

}
