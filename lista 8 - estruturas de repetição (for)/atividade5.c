/*5) Dada uma faixa de valores, cujo valor inicial e o valor final deverão ser fornecidos pelo
usuário, identifique:
a) a quantidade de números inteiros e positivos;
b) a quantidade de números pares;
c) a quantidade de números ímpares;
d) a quantidade de números ímpares e divisíveis por 3 e 4 ao mesmo tempo;
e) a respectiva média para cada um dos itens*/

#include <stdio.h>

int main () {
    
    float media1, media2, media3, div34 = 0;
    int vfinal, vinicial, pares = 0, impares = 0, inteiros = 0, somainteiros = 0, somapares = 0, somaimpares = 0;
    
    printf ("Digite o valor inicial: ");
    scanf ("%d", &vinicial);
    
    printf ("Digite o valor final (Deve ser maior que o inicial: )");
    scanf ("%d", &vfinal);
    
    for (int i = vinicial; i <= vfinal; i++){ //o i sera o contador
    //e enquanto ele for menor que o valor final as operações vao acontecer
        
        if (i % 2 == 0) { //verificando se é par
            pares++;
            somapares += i;
        }
        
        else {
            impares++; //entra se nn for par
            somaimpares += i;
        } //colocado pois se nao apenas a primeira condição entra
        
        if (i % 2 != 0 && i % 3 == 0 && i % 4 == 0) {
            div34++;
        //verificando e somando os que dividem por 3 e 4
        //usei o && pois so entra nessa condição se for verdadeiro nos 3
        //embora nenhum numero impar seja divisivel por 4,coloquei para mostrar a logica que usaria 👍
        //nao vou fazer media pois nao tera nenhum valor
            
        }
        
        if (i > 0) { //verificando os > 0, se for, sera inteiro e positivo portanto entra na soma abaixo
            inteiros++;
            somainteiros += i;
        }
    }
    
    media1 = (float) somainteiros / inteiros;
    media2 = (float) somaimpares / impares;
    media3 = (float) somapares / pares;
    
    printf ("A quantidade de números inteiros e positivos é: %d, e a media entre eles é: %f", inteiros, media1);
    printf ("\nA quantidade de números pares no intervalo é: %d, e a media entre eles é: %f", pares, media3);
    printf ("\nA quantidade de números impares no intervalo é: %d, e a media entre eles é: %f", impares, media2);
    printf ("\nA quantidade de números impares diviseis por 3 e 4 é: %.1f", div34); //mesmo que não tenha
    
    return 0;
}

//esse deu trabalho em professora
