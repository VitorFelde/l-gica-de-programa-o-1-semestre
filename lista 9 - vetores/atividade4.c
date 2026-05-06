/*4) Faça um programa que permita a leitura das notas (tipo float) de uma turma de 20
alunos. Calcular a média da turma e contar quantos alunos obtiveram nota acima desta
média calculada. Escrever a média da turma e o resultado da contagem.*/

#include <stdio.h>
#define TAM 20

int main()
    {
    float n, vetorB = 0, media; 
    int vetorA[TAM], quantidade = 0, quant1 = 0;
    
    do {
        printf ("Digite sua nota: ");
        scanf ("%f", &n);
    
        vetorA[quantidade] = n;
        quantidade++;
        
    }
    
    while (quantidade < 20);
    
    for (int i = 0; i < TAM; i++) { /*enquanto o i, que é zero, for menor que limite definido (20), ele vai crescer,
    e puxar a posição de dentro do vetor, dai embaixo ficou a soma do vetorB, que na verdade nao é um vetor, mas serve
    como variavel de soma, para armazenar o ultimo valor, e o vetorA[i], conforme o i cresce, vai acumulando novos valores
    e guardando dentro das posições, dai depois na media usamos essa variavel somadora, e dividimos pela quantidade, que fiz crescer
    dentro do do-while*/
        vetorB = vetorB + vetorA[i];
      
      
        
    }
     media = vetorB / quantidade;
    printf ("Media da turma = %f", media);

    for (int i = 0; i < TAM; i++) { //se tiver fora de um for, fica solto no codigo e não faz sentido
        if (vetorA[i] > media) //puxa a posição da nota e compara com a media
            quant1++;
}
    printf ("\nO número de alunos que tiraram acima da média foi: %d", quant1);    

    return 0;
}
