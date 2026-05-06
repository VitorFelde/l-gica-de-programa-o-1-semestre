/*2) Ler os valores de um vetorA com 10 elementos, verificar se o valor é PAR, se SIM
multiplicar por 5, se NÃO, somar com 5. O resultado deve ser colocado em outro vetor.
Mostre os valores do vetor final.*/

#include <stdio.h>

int main () {

	int vetorA[10], vetorB[10];	
	
	for (int i = 0; i < 9; i++) {
		printf ("Digite um valor: ");
		scanf ("%d", &vetorA[i]);
		
}
	
	for (int i = 0; i < 9; i++) {
		
		if (vetorA[i] % 2 == 0) {
			vetorB[i] = vetorA[i] * 5;
			printf ("\nOs valores pares são: %d\nMultiplicados por 5: %d", vetorA[i], vetorB[i]);
}
		
			
		else {
			vetorB[i] = vetorA[i] + 5;
			printf ("\nValores impares: %d\nSomados com 5: %d", vetorA[i], vetorB[i]);
}
	}
	
		
	return 0;
	
}
