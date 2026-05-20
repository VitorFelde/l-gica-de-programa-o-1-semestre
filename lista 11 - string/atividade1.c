/*1) Faça um programa para concatenar as duas strings abaixo. A segunda string deve ser
concatenada na primeira.
Exemplo: string1: lua string2: cheia
Após concatenar: string1: luacheia string2: cheia*/

#include <stdio.h>
#include <string.h>

int main () {
	
	
	char string1[50], string2[50];
	
	printf ("Digite a primeira string: ");
	fgets (string1, sizeof(string1), stdin);
	
	printf ("Digite a primeira string: ");
	fgets (string2, sizeof(string2), stdin);
	
	string1[strlen(string1) - 1] = '\0'; //a string 1 pega o tamanho dela mesma, diminui 1, para pegar o \n automatico e atribui \0
	
	strcat (string1, string2);
	
	printf ("%s", string1);	
	
	
	return 0;
	
	}
