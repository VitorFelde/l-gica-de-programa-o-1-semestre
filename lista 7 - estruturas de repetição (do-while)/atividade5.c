/*Faça um programa que leia um valor inteiro N (positivo ou negativo) enquanto o número esteja
no intervalo 0 <= N <= 10. Utilize o comando do-while.*/

#include <stdio.h>

/*quando tem um do, o while nao precisa ter condição
a estrutura é:
do {ação desejada}
while (condição)

apenas colocando para eu nao esquecer professora, pode ignorar*/

int main()
{

int n;

do {
printf ("Entre com um numero entre 0 e 10: ");
scanf ("%d", &n);

if (0 <= n && n <= 10)
printf ("%d\n", n);

else
printf ("Numero fora do intervalo!");


} while (0 <= n && n <= 10);

return 0;

}
