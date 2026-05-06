#include <stdio.h>
#include <math.h>

int main () {

    int numero, soma;

    printf ("Digite o numero que deseja somar os algarismos internos: ");
    scanf("%d", &numero);

    soma = ((numero % 10) + (numero / 10) % 10 + (numero / 100) % 10 + (numero /1000));

    printf ("A soma dos quatro algarismos do numero desejado e igual: %d", soma);

    return 0;

}
