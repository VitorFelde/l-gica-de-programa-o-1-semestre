/*7) Faça um programa para ler e comparar duas strings. Para testar bem o exercício, faça
a leitura de strings iguais e diferentes, alternando maiúsculas e minúsculas.
Exemplo:
string1: teste
string2: teste
Saída: as strings são iguais
string1: teste
string2: TESTE
Saída: as strings são diferentes*/

#include <stdio.h>
#include <string.h>

int main () {
	
	int i, tamanhotop;
	char string2[50], string1[50], j = 0;
	
	printf ("Digite sua sentença: ");
	fgets (string1, sizeof(string1), stdin);
	
	printf ("Digite sua outra sentença: ");
	fgets (string2, sizeof(string2), stdin);
    

    if (strcmp (string1, string2) == 0) { //se for igual a zero, que significa que sao iguais, printa iguais
        printf ("Sentenças iguais");
    }
    
    else { //elsezao top, faz o resto
        printf("Sentenças diferentes");
    }
	
	return 0;
	
	}
