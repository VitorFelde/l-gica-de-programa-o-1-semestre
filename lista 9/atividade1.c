/*1) Faça um programa para calcular o dobro de cada elemento de um vetorA com 5
elementos e colocar os resultados em um segundo vetorB. Mostre os valores resultantes
do vetorB.*/

#include <stdio.h>

int main () {

	int vetorA [5] = {10, 20, 30, 40, 50}; //declarando os valores para meu vetor
	int vetorB [5]; //para que o vetorA e o vetorB terem o mesmo numero de posicoes
	
	
	for (int i = 0; i < 5; i++) {
		printf ("Valores do Vetor A: %d\n", vetorA[i]); //printando o valor de A
	}

	printf ("\n"); //quebra de linha

	for (int i = 0; i < 5; i++) { 
		vetorB[i] = vetorA[i] * 2; 
		//o i cresce, e portanto retorna o valor de dentro da array
		printf ("Valores do Vetor B: %d\n", vetorB[i]); 
		//os 'i's depois dos vetores b, são para puxar cada posição'
		}


	return 0;

}
  
