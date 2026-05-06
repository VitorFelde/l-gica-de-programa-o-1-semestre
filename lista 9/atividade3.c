/*3) Faça um programa para ler dois vetores X e Y, ambos com n elementos, e determinar o
produto escalar desses vetores.
Exemplo:
X = [1 2 3] Y = [4 5 6]
O produto escalar é dado por (1*4 + 2*5 + 3*6) = 32*/

#include <stdio.h>
#define TAM 10

int main () {

	int n, vetorX[TAM], vetorY[TAM], escalar = 0;


	do { //faz a pergunta para o usuario enquanto ele não digitar um valor menor/igual o limite definido em TAM acima
	printf ("Digite o valor de vetores existentes: ");
	scanf ("%d", &n);
}

	while (n > TAM); //se o numero escolhido pelo usuario for maior que o limite a pergunta se repete

	
	for (int i = 0; i < n; i++) { //isso serve para que o numero de vezes que o usuario digitar os valores para x
		//tenha a condição de parada quando i que inicia em 0, chegar em n, que foi definido anteriormente, mesma coisa
		//para o de baixo
		printf ("Digite os valores de x: ");
		scanf ("%d", &vetorX[i]);
	}

	
	for (int i = 0; i < n; i++) { 
		printf ("Digite os valores de y: ");
		scanf ("%d", &vetorY[i]);
	}


	for (int i = 0; i < n; i++) { //mesma condição
		escalar = escalar + vetorX[i] * vetorY[i]; //escalar era 0, e agora soma com a multiplicação dos vetores
	}

	printf ("O valor total é: %d\n", escalar);


	return 0;

}
