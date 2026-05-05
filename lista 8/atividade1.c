/*1) Faça a tabuada de um número e apresente o resultado de acordo com o modelo a
seguir, sabendo que o multiplicando deverá ser fornecido pelo usuário (n), assim como a
quantidade de iterações (i).
n x 1 = n
n x 2 = 2n
n x 3 = 3n
....
n x i = in*/

#include <stdio.h>
int main () {

    int n, i;


    printf ("Digite o multiplicando (até onde a tabuada vai): ");
    scanf ("%d", &n);

    printf ("Digite o multiplicador (qual numero vai ser a tabuada): ");
    scanf ("%d", &i);


    for(int cond = 1; cond <= n; cond++)
    {
    printf("%d x %2d = %2d\n", i, cond, i*cond);
    }

    return 0;
}
