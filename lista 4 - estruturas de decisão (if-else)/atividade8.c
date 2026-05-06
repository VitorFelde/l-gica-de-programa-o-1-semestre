#include <stdio.h>
#include <math.h>

int main ()
{

    char genero, imc, M, F;
    float peso, altura;

    printf("Digite seu gênero em letras maiúsculas [M/F]: ");
    scanf(" %c", &genero);

    printf("Digite seu peso em Kgs [Ex: 60 quilos e 500 gramas = 60.5]: ");
    scanf(" %f", &peso);

    printf("Digite sua altura em metros [Ex: 1 Metro e 54 centímetros = 1.54]: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 19 && genero == 'F')
        printf ("IMC = Abaixo do peso\n");

    else if (imc < 20 && genero == 'M')
    {
        printf ("IMC = Abaixo do peso\n");
    }

    else if (imc >= 19 && imc < 23.9 && genero == 'F')
    {
        printf ("IMC = Normal\n");
    }

    else if (imc >= 20 && imc < 24.9 && genero == 'M')
    {
        printf ("IMC = Normal\n");
    }

    else if (imc >= 24 && imc < 28.9 && genero == 'F')
    {
        printf ("IMC = Obesidade leve\n");
    }

    else if (imc >= 25 && imc < 29.9 && genero == 'M')
    {
        printf ("IMC = Obesidade leve\n");
    }

    else if (imc >= 29 && imc < 38.9 && genero == 'F')
    {
        printf ("IMC = Obesidade moderada\n");
    }

    else if (imc >= 30 && imc < 39.9 && genero == 'M')
    {
        printf ("IMC = Obesidade moderada\n");
    }

    else if (imc > 39 && genero == 'F')
    {
        printf ("IMC = Obesidade morbida\n");
    }

    else if (imc > 40 && genero == 'M')
    {
        printf ("IMC = Obesidade morbida\n");
    }

    return 0;


}

