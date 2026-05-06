#include <stdio.h>

int main () {  
  
int pares = 0, impares = 0, i = 0, n;

 printf ("Digite um número que deseja ver a soma: ");
 scanf ("%d", &n);
 
 while (i <= n) { 
	 
	if (i % 2 == 0) { //i por conta que é contador, é o que soma os algarismos de n
		pares = pares + i;
		
		
	} else {
		impares = impares + i; //i é o que está aumentando
	}
	
	
	i++;
}

printf ("A soma dos números pares é: %d\n", pares);
printf ("A soma dos números impares é: %d\n", impares);

return 0;


}
