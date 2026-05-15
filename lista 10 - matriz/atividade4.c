/*4) Faça um programa para ler os valores de uma matriz A (mxn) e determine a matriz T transposta
de A. (obs.: T[i][j] = A [j][i])*/

#include <stdio.h>

int main () {
	
	int l, d, i, j;
	// l = linhas
	// d = colunas
	// i e j servem para andar pela matriz
	
	printf ("Digite o nº de linhas: ");
	scanf ("%d", &l);
	// usuario escolhe quantas linhas a matriz original vai ter
	
	printf ("Digite o nº de colunas: ");
	scanf ("%d", &d);
	// usuario escolhe quantas colunas a matriz original vai ter
	
	
	int matrizA[l][d], matrizT[d][l]; 
	// matriz original = linhas x colunas
	// transposta = colunas x linhas
	// por isso inverteu os tamanhos
	
	for (i = 0; i < l; i++)
		// percorre todas as linhas da matriz A
		
		for (j = 0; j < d; j++) {
			// percorre todas as colunas da matriz A
			
			printf ("Digite o vetor na posição: [%d][%d]: ", i, j);
			scanf ("%d", &matrizA[i][j]);
			// salva o valor digitado naquela posição
		}
		
	for (i = 0; i < d; i++) { 
	    // percorre as linhas da transposta
	    // linhas da transposta = colunas da matriz original
		
		for (j = 0; j < l; j++) {
		    // percorre as colunas da transposta
		    // colunas da transposta = linhas da matriz original
			
			matrizT[i][j] = matrizA[j][i];
			// pega linha e coluna da original
			// e troca de lugar na transposta
			// exemplo:
			// A[0][1] vira T[1][0]
		}
	}
	
	for (i = 0; i < d; i++) { 
	    // tenta mostrar todas as linhas da transposta
		
		for (j = 0; j < l; j++) {	
		    // tenta mostrar todas as colunas da transposta
		
		    printf (" %d ", matrizT[i][j]);
		    // imprime valores da matriz transposta
		    // aqui esta usando j antes e i depois,
		    // entao vale pensar se esta seguindo
		    // o mesmo padrão usado para preencher
	    }	
		
		printf ("\n");
		// quebra linha para mostrar formato de matriz
	}
	
return 0;

}
