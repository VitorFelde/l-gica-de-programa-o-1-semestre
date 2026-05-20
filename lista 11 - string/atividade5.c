/*5) Faça um programa que leia uma string e troque todos os caracteres para caracteres
maiúsculos.
Exemplo:
Entrada: teste
Saída: TESTE*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
	
	int i;
	char string1[50];
	
	printf ("Digite sua sentença com letras minúsculas: ");
	fgets (string1, sizeof(string1), stdin);
	
	
	for (i = 0; i < 50; i++) {
		string1[i] = toupper (string1[i]);

	}
	printf ("Sua sentença com letras maiusculas é: %s", string1);
	
	return 0;
	
	}
