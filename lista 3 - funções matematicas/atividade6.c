#include <stdio.h>
#include <math.h>

int main () {

    float valor, parcela;

    printf ("Digite o valor da compra: ");
    scanf ("%f", &valor);

    parcela = valor / 5;

    printf ("O valor da compra em 5 parcelas e igual = %f", parcela); //desculpa, meu teclado esta sem acento

    return 0;

}
