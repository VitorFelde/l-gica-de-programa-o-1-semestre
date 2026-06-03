/*2) Escreva uma função que determine o número de raízes reais de um polinômio de 2°
grau, ou seja, deve retornar o valor 2 se o polinômio possui duas raízes reais distintas, 1
se o polinômio possui raízes reais iguais e 0 se o polinômio não possui raízes.*/

#include <stdio.h>

	int polinomio (int a, int b, int c) {
	
	int delta;
	
	delta = (b * b)/*serve com b ao quadrado*/ - (4 * a * c);
	
	if (delta > 0) //se o delta for maior quezero tera o retorno 2
	return 2;
	
	if (delta == 0) //se for igual, tera 1
	return 1;
	
	if (delta < 0) //se for menor que 0, tera 0 raizes reais
	return 0;	
		
	}
	
	int main () {
		
	int a, b, c, numero; //podemos criar a,b e c denovo pq é outra funcao
	
	printf ("Digite um valor para o A: ");
	scanf ("%d", &a);	
	
	printf ("Digite um valor para o B: ");
	scanf ("%d", &b);	
	
	printf ("Digite um valor para o C: ");
	scanf ("%d", &c);	
		
	numero = polinomio (a,b,c); //juntando a funcao com os parametros em uma variavel para printa-la
		
	printf ("Numero de raizes da sua equação de segundo grau é: %d", numero); //printando
		
		return 0;
	}
