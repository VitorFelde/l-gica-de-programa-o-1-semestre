/*2) Faça um programa que imprima os 15 primeiros termos da série de Fibonacci.
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610
Observação: os dois primeiros termos desta série são 1 e 1 e os demais são gerados a partir da
soma dos dois anteriores*/

#include <stdio.h>

int main () {
	
	int i = 1, num = 1, num2 = 1, res;
	
	printf ("%d\n", num);
	printf ("%d\n", num2);
	
	while (i < 14) {
		
		res = num + num2; 
		
		num = num2;
		
		num2 = res;
		
		i++;
	
	printf ("%d\n", num2);
		
	}
	
	return 0;	
	
	
	}
