/*5) Ler um vetor V de 20 posições (aceitar somente números positivos). Escrever a seguir
o valor do maior elemento de V e a respectiva posição que ele ocupa no vetor.*/

#include <stdio.h>
#define TAM 20

int main()
    {
   
   int vetorV[TAM], maior = 0, posi = 0, cont = 0;
   
   do {
       printf ("Digite um valor para o vetor (positivo apenas): ");
       scanf ("%d", &vetorV[cont]); // scaneando o valor de vetorV, definindo os valores e armazenando nas posições
       //gracas ao [cont] + cont++, ja que um puxa o valor do de baixo, que crescem enquanto a condição do while
       //nao for satisfeita
       cont++;
       
   }
   
   while (cont < TAM);
 
    for (int i = 0; i < TAM; i++) {
        if (vetorV[i] > maior) { //se o valor do vetor for maior do que o valor armazenado em maior
        //logo maior recebe o valor, mesma coisa para a posicao recebendo o i
            maior = vetorV[i]; 
            posi = i;
        }
    }
   
   printf ("Maior valor é: %d, já a posição no vetor do maior valor é: %d", maior, posi);
   
    return 0;
}
