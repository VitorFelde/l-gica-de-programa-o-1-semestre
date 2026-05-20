/*4) Faça um programa semelhante ao anterior, mas agora o caractere também deve ser
fornecido pelo usuário.*/

#include <stdio.h>
#include <string.h>

int main () {
	
	int contadorO = 0, i;
	char string1[50], caractere;
	
	printf ("Digite sua sentença: ");
	fgets (string1, sizeof(string1), stdin);
	
	printf ("Digite o caractere que deseja saber a quantidade: ");
	scanf (" %c", &caractere);
	
	for (i = 0; i < 50; i++) {
		if (string1[i] == caractere) //percorre a string e seus valores usando o i
			contadorO++;
	}
	printf ("O total de letras '%c' em sua sentença é: %d", caractere, contadorO);
	
	
	
	return 0;
	
	}
