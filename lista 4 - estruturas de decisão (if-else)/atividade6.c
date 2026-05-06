#include <stdio.h>


int main () {

float salario, aumento;

printf ("Digite seu salário para descobrir quanto terá de aumento: ");
scanf ("%f", &salario);

if (salario < 990.01){
aumento = (salario + salario * 0.20);
printf ("Seu salaŕio teve um aumento de 20%%, e portanto ficou em: %.lf", aumento);}

else if (salario > 990.01 && salario < 1480.01){
aumento = (salario + salario * 0.10);
printf ("Seu salaŕio teve um aumento de 10%%, e portanto ficou em: %.lf", aumento);}

else if (salario > 1480 && salario < 2000.01){
aumento = (salario + salario * 0.20);
printf ("Seu salaŕio teve um aumento de 5%%, e portanto ficou em: %.lf", aumento);}

else if (salario > 2000.01){
printf ("Seu salaŕio não teve aumento!");}

return 0;

}
