#include <stdio.h>

int main()
{
    int n;
    
    printf("Qual o número de alunos na sala?: ");
    scanf("%d", &n);
    
   
    float notas[n][4]; //4 fixo pois sao 4 colunas de qqlr jeito, nao importa o numero de alunos
    //vetorzao para armazenar a média de cada aluno
    float mediasalunos[n];
    float somageral = 0.0;
    float mediageral = 0.0;
    
    for (int i = 0; i < n; i++) { //dentro do for, pois vai pedir enquanto tiver aluno
        float somaaluno = 0.0; //nn sei pq cria aqui, mas foi a solucao que acehi
        printf("\nDigite as 4 notas do Aluno %d:", i + 1); //colocamos + 1 pois comeca em 0
        
        for (int j = 0; j < 4; j++) {
            printf("Nota %d: ", j + 1); //mesma coisa la de cima, +1 pq cmc em 0
            scanf("%f", &notas[i][j]);
            somaaluno = somaaluno + notas[i][j];
        }
        
        
        mediasalunos[i] = somaaluno / 4.0; //calcula media do aluno

        somageral = somageral + mediasalunos[i]; //soma com a media da trm q comeca em 0, com a do aluno
    }
    
    mediageral = somageral / n;
    
    printf("\nALUNO\tNOTA1\tNOTA2\tNOTA3\tNOTA4\tMEDIA\n"); //t para tabulacao, que é o espaco que fica enre os elementos
    
    for (int i = 0; i < n; i++) {
        printf("%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", i + 1, notas[i][0], notas[i][1], notas[i][2], notas[i][3], mediasalunos[i]);
        //i + 1 pois comeca em 0, e dai imprimos as notas dos alunos, com o i, que cresce de acordo com o numero total de aluno, mas 
        //a coluna fica fixa, entao por isso coloca valores fixos e nao crescentes
    }//t para ficar bonitinho - tive que pesquisar como deixar formatado assim
    
    printf("MEDIA GERAL: %.2f\n", mediageral); //nao precisava deixar aqueles pontinhos ne professora?!
    
    return 0;
}
