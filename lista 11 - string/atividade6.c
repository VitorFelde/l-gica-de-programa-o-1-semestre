/*6) Faça um programa para ler uma string e mostrar o seu conteúdo de forma invertida.
Exemplo:
Entrada: teste
Saída: etset*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
	
	int i, stringInv[50];
	char string1[50];
	
	printf ("Digite sua sentença: ");
	fgets (string1, sizeof(string1), stdin);
	
	
	for (i = 0; i < 50; i++) {
			stringInv[i] = string1[i] - 1 - i;  
	}
	printf ("Sua sentença inversa é: %c", stringInv);
	
	return 0;
	
	}
