/*1) Faça um programa para concatenar as duas strings abaixo. A segunda string deve ser
concatenada na primeira.
Exemplo: string1: lua string2: cheia
Após concatenar: string1: luacheia string2: cheia*/

#include <stdio.h>
#include <string.h>

int main () {
	
	char string1[50] = "lua", string2[50] = "cheia";
	
	strcat (string1, string2);
	
	printf ("%s", string1);	
	
	
	return 0;
	
	}
