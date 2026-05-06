#include <stdio.h>
#include <math.h>

int main () {

    int hora, minutos, segundos, segundosdeclarados, resto;

    printf("Escreva o numero de segundos: ");
    scanf("%d", &segundosdeclarados);

    hora = segundosdeclarados / 3600; //saber quantas horas inteiras deu
    resto = segundosdeclarados % 3600; // saber quanto sobrou apos remover as horas inteiras
    minutos = resto / 60; // saber quantos minutos tem do que restou
    segundos = resto % 60; //saber quantos segundos tem do que restou

    printf("%d:%d:%d\n", hora, minutos, segundos); //

    return 0;
}
