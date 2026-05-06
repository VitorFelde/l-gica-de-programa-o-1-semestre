/*7) Fazer uma variação do exercício 5 e 6 em que ele deve escrever o maior e o menor
valor pegando a respectiva posição de cada um.*/

#include <stdio.h>
#define TAM 20

int main()
    {
   
   int vetorV[TAM], menor = 999999, posi = 0, cont = 0, maior = 0, posimaior; //menor tem que ser um valor alto, para que o menor 
   //que o usuario digitar seja menor que o que tem o valor definido
   
   do {
       printf ("Digite um valor para o vetor (positivo apenas): ");
       scanf ("%d", &vetorV[cont]); // scaneando o valor de vetorV, definindo os valores e armazenando nas posições
       //gracas ao [cont] + cont++, ja que um puxa o valor do de baixo, que crescem enquanto a condição do while
       //nao for satisfeita
       cont++;
       
   }
   
   while (cont < TAM);
 
    for (int i = 0; i < TAM; i++) {
        if (vetorV[i] < menor) { //se o valor do vetor for maior do que o valor armazenado em maior
        //logo maior recebe o valor, mesma coisa para a posicao recebendo o i
            menor = vetorV[i]; 
            posi = i;
        }
        
        if (vetorV[i] > maior) { 
            maior = vetorV[i]; 
            posimaior = i;
        
    }
}    
   printf ("Menor valor é: %d, já a posição no vetor do menor valor é: %d", menor, posi);
   printf ("\nMaior valor é: %d, já a posição no vetor do maior valor é: %d", maior, posimaior);

    return 0;
}
