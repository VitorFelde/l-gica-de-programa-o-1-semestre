/*8) Faça um programa para ler uma sequência de 10 números, armazená-los em um vetor,
e depois armazená-los em um segundo vetor na ordem inversa à da leitura.*/

#include <stdio.h>
#define TAM 10

int main()
    {
   
   int vetor[TAM], vetorInverso[TAM], cont = 0;
   
   do {
       printf ("Digite um valor para o vetor: ");
       scanf ("%d", &vetor[cont]);
   
       cont++;
   }
   
   while (TAM > cont);
   
   for (int i = 0; i < TAM; i++) {
       vetorInverso[i] = vetor[TAM - i - 1];
       /*pensando o seguinte, vai pegar o vetor, com a posicao do i, que comeca em 0 e vai ate TAM
       então, o vetor natural, pega a posição maxima do TAM, que no caso é 10, diminui 1, por conta da
       contagem do vetor iniciar em 0, se nao tivesse menos 1, ficaria por exemplo: 10 - i (supondo i = 3)
       ficaria 10 - 3, e puxaria a posição 7 do vetor, mas queremos a 6, pois comeca do zero, entao de 0 a 6 
       já são 7*/
            
   }
   
    printf ("Valores em sua forma natural: \n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
}

    printf ("\nValores em sua forma inversa\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetorInverso[i]);
}
   
    return 0;
}
