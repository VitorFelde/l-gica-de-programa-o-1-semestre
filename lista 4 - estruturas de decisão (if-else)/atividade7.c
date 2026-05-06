#include <stdio.h>
#include <math.h>

int main () {

float lado1, lado2, lado3;

printf("Digite o tamanho do primeiro lado: ");
scanf("%f", &lado1);

printf("Digite o tamanho do segundo lado: ");
scanf("%f", &lado2);

printf("Digite o tamanho do terceiro lado: ");
scanf("%f", &lado3);

if (lado1 + lado2 < lado3 || lado1 + lado3 < lado2 || lado2 + lado3 < lado1)
printf ("Seus lados não podem formar um triângulo! Escolha outros valores!");

else if (lado1 == lado2 && lado2 == lado3) {
    printf ("Seu triângulo é Equilátero!");
}

else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
    printf("Seu triângulo é Isósceles!");
}

else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
    printf("Seu triângulo é Escaleno!");
}

return 0;


}
