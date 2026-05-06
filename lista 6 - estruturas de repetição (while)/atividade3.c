#include <stdio.h>

int main()
{
    int i = 0, soma = 0;

    while (i <= 100) {
        if (i % 2 != 0) { 
        soma = soma + i; //alterando o valor da variavel que era zero, e agora ta subindo junto com o i.
        }
        i++;
    }

    printf("Resultado da soma entre números ímpares: %d", soma); 
    /*esta fora das chaves, 
    pois assim nao mostra resultado parcial*/

    return 0;
}

