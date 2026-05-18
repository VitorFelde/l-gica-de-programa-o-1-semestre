/*6) Faça um programa para calcular e apresentar a média geral de uma turma de n alunos. A
média a ser obtida deve ser a média geral de cada aluno durante o ano letivo das quatro notas.
Apresentar o resultado da forma abaixo:
ALUNO NOTA1 NOTA2 NOTA3 NOTA4 MEDIA
1 8.0 9.0 8.0 7.0 8.0
2 9.0 7.0 6.0 7.0 7.2
3 5.0 6.0 7.0 6.0 6.0
MEDIA GERAL.......................: 7.1*/

#include <stdio.h>

int main()
{
    
    float media = 0, nota, soma = 0;
    int n;
    
    printf ("Qual o número de alunos na sala?: ");
    scanf ("%d", &n);
    
    int matriz[n][4];
    //aqui colocamos 4, pois as colunas serao as notas, e sao 4 notas + media, portanto nao é necessario mais, so as linhas mudam
    
    return 0;
}
