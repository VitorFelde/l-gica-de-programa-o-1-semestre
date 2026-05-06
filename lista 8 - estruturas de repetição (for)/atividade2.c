/*2) Faça um programa que, para um grupo de 30 valores reais, determine o valor máximo,
o valor mínimo e a média dos valores maiores que 5,9*/



#include <stdio.h>
int main () {

    float media, num, max, min, soma = 0;
    int quant = 0;

    for (int i = 1; i <= 5; i++) //contador, comecando do 1 e indo até o 30
    {
        printf ("Digite um numero:");
        scanf ("%f", &num);

        if (num > 5.9) {
            quant++; //para fazer a media
            soma = soma + num; //soma, para dividir pelo quant dps
        }

        if (i == 1) { //na primeira condição o valor maximo e minimo sera o numero e depois eles alteram de acordo com os elses ifs embaixo
            max = num;
            min = num;
        }

        else if (max < num) {
            max = num;}

        else if (min > num){
            min = num;}


    }


    media = soma/quant; //media fora para fazer uma vez so

    printf ("O valor máximo é: %.2f\n", max);
    printf ("O valor minimo é %.2f\n", min);

    printf ("A media dos numeros maiores que 5,9 é: %f", media);

return 0;

}
