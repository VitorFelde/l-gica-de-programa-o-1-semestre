/*6) Faça um programa para ler uma string e mostrar o seu conteúdo de forma invertida.
Exemplo:
Entrada: teste
Saída: etset*/

#include <stdio.h>
#include <string.h>

int main () {
	
	int i, tamanhotop;
	char stringInv[50], string1[50], j = 0;
	
	printf ("Digite sua sentença: ");
	fgets (string1, sizeof(string1), stdin);
	
	tamanhotop = strlen (string1);//obtendo o tamanho da string
	
	for (i = tamanhotop - 1; i >= 0; i--) { //tamanhotop é a variavel criada para obter o tamanho
	//da string que o usuario digitou inicialmente, dai fazemos menos 1, pois o ultimo digito da string
	//é o \0, que é nulo
	    stringInv[j] = string1[i]; //contador do i, diminui, e do j cresce, fazendo a op de inversao
	    j++;
	}
	
	stringInv[j] = '\0'; //para determinar o fim da nova string
	
	printf ("Sua sentença inversa é: %s", stringInv);

	
	return 0;
	
	}
