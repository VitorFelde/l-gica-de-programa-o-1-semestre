/*3) Faça um programa para contar quantos caracteres “o” existe em uma string fornecida
pelo usuário.
Exemplo:
Entrada: o dia esta nublado
Saída: 2*/

#include <stdio.h>
#include <string.h>


int main () {
	
	int contadorO = 0, i;
	char string1[500];
	
	printf ("Digite sua sentença: ");
	fgets (string1, sizeof(string1), stdin);
	
	
	for (i = 0; i < 50; i++) {
		if (string1[i] == 'o' || string1[i] == 'O') //percorre a string e seus valores usando o i e verifica se tem o
			contadorO++;
	}
	printf ("O total de letras 'o' em sua sentença é: %d", contadorO);
	
	
	
	return 0;
	
	}
