#include <stdio.h>

int main () {


int i = 1, media = 0, validos = 0, n;

 
	while (i <= 15) {
		 printf ("Digite o número: ");
		 scanf ("%d", &n);
		 
		 if (n > 10) {
			validos = validos + 1;
			media = media + n;
			}

		i++;
		
	}
	
	media = media / validos;
	
	printf ("A media dos números maior que 10 é: %d", media);
	
 return 0;
 
}
