#include <stdio.h>
#include <math.h>

int main ()
{

    int v1, v2, troca;

    printf ("Digite o valor de v1: ");
    scanf("%d", &v1);

    printf ("Digite o valor de v2: ");
    scanf("%d", &v2);

    printf("Os valores iniciais sao:\n v1: %d \n v2: %d", v1, v2);

    troca = v1;
    v1 = v2;
    v2 = troca;

    printf("\n Os valores finais invertidos sao:\n v1: %d \n v2: %d", v1, v2);
    //v1 acaba sendo v1 mesmo, por conta da
    //inversao nas linhas acima, e a mesma coisa para v2.

    return 0;

}
