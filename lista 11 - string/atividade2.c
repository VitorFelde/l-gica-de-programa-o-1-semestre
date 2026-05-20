/*2) Faça um programa semelhante ao anterior, mas agora as duas strings devem ser
digitadas pelo usuário e depois concatenadas e atribuídas a uma terceira string. Exibir o
tamanho de todas elas após a concatenação
Exemplo: string1: lua string2: nova
Após concatenar: string1: lua string2: nova string3: lua nova
Tamanhos: 3 4 8*/

#include <stdio.h>
#include <string.h>

int main () {
	
	
	char string1[50], string2[50], string3[50];
	int tam1, tam2, tam3;
	
	
	printf ("Digite a primeira string: ");
	fgets (string1, sizeof(string1), stdin);
	tam1 = strlen(string1) - 1; //pegando o tamanho da string e diminuindo 1 por causa do \n
	
	
	printf ("Digite a segunda string: ");
	fgets (string2, sizeof(string2), stdin);
	tam2 = strlen(string2) - 1;
	
	
	string1[strlen(string1) - 1] = '\0';
	
	strcat (string1, string2);
	
	printf ("string 3: %s", string1);	
	
	strcpy (string3, string1);
	tam3 = strlen(string3) - 1;
	
	printf ("\nSeus tamanhos são: string1 = %d, string2 = %d e string3 = %d", tam1, tam2, tam3);
	
	
	return 0;
	
	}
