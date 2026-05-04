#include <stdio.h>
#include <math.h> 

int main () {


int nquad, ncubo, n = 1;



 while (n < 11) {
	 ncubo = pow (n, 3);
	 nquad = pow (n, 2);
	 printf ("%d, seu quadrado %d, e seu cubo: %d\n", n, nquad, ncubo);
	 n++;
	}
	
 return 0;
}
