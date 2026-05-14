/*3) Considere duas matrizes A e B de tamanho mxn (informados pelo usuário). Faça um programa
para calcular a matriz C, resultante da soma da matriz A com a matriz B. Imprimir a matriz C na
forma de uma matriz (LxC).*/

#include <stdio.h>
#define TAM 2
int main () {
	
	int i, j, l, d;
	
	int matA[TAM][TAM], matB[TAM][TAM], matC[TAM][TAM];
		
			
			
	printf ("Digite o numero de linhas desejadas: ");
	scanf ("%d", &l);	
	printf ("Digite o numero de colunas desejadas: ");
	scanf ("%d", &d);	
			
	
	for (i = 0; i < l; i++)  
		for (j = 0; j < d; j++) {
			printf ("Digite um numero para a matriz A na posição [%d][%d]: ", i, j);
			scanf ("%d", &matA[i][j]);
		
		}
	
	for (i = 0; i < l; i++) 
		for (j = 0; j < d; j++) {
			
			printf ("Digite um numero para a matriz B na posição [%d][%d]: ", i, j);
			scanf ("%d", &matB[i][j]);
		}
		
		
	for (i = 0; i < l; i++) 
		for (j = 0; j < d; j++) {
	
		matC[i][j] = matA[i][j] + matB[i][j];
		}
	
		
		
	for (i = 0; i < l; i++) {
		for (j = 0; j < d; j++) {
		printf ("%d ", matC[i][j]);
	}
		printf ("\n");
	}
return 0;

}
