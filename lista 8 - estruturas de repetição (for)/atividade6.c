/*6) Faça um programa que mostre os conceitos finais dos alunos de uma sala de aula de
40 pessoas, considerando a tabela a seguir. Para isso, a nota final e o código do aluno
deverão ser fornecidos pelo usuário. Ao final do programa, apresente a quantidade de
alunos e a média de nota alcançada para cada conceito.
Nota Conceito
De 0,0 a 2,9 E
De 3,0 a 4,9 D
De 5,0 a 6,9 C
De 7,0 a 8,9 B
De 9,0 a 10,0 A*/

#include <stdio.h>

int main () {
    
    float somaa = 0, somab = 0, somac = 0, somad = 0, somae = 0, mediaa, mediab, mediac, mediad, mediae, nota;
    char conceito;
    int qtda = 0, qtdb = 0, qtdc = 0, qtdd = 0, qtde = 0, codigo;


    for (int i = 0; i < 40; i++) {
    
        printf ("Digite seu código de aluno (numero): "); //nao vai ser usado, mas tem que ser colocado pois tava no enunciado
        scanf ("%d", &codigo);
        
        printf ("Digite sua nota: ");
        scanf ("%f", &nota);
    
        if (nota >= 0 && nota <= 2.9) {
            somae += nota;
            qtde++;
        }
    
        else if (nota >= 3.0 && nota <= 4.9) {
            somad += nota;
            qtdd++;
        }
    
        else if (nota >= 5.0 && nota <= 6.9) {
            somac += nota;
            qtdc++;
        }
        else if (nota >= 7.0 && nota <= 8.9) {
            somab += nota;
            qtdb++;
        }   
        else if (nota >= 9.0 && nota <= 10.0) {
            somaa += nota;
            qtda++;
        }


    }

    mediae = somae / qtde; //as medias vao ser a soma das notas, divido por quantas tiverem
    mediad = somad / qtdd;
    mediac = somac / qtdc;
    mediab = somab / qtdb;
    mediaa = somaa / qtda;
    
    
    printf ("O total de alunos com a média E (De 0,0 a 2,9) é: %d, e a media das notas é: %.2f", qtde, mediae);
    printf ("\nO total de alunos com a média D (De 3,0 a 4,9) é: %d, e a media das notas é: %.2f", qtdd, mediad);
    printf ("\nO total de alunos com a média C (De 5,0 a 6,9) é: %d, e a media das notas é: %.2f", qtdc, mediac);
    printf ("\nO total de alunos com a média B (De 7,0 a 8,9) é: %d, e a media das notas é: %.2f", qtdb, mediab);
    printf ("\nO total de alunos com a média A (De 9,0 a 10,0) é: %d, e a media das notas é: %.2f", qtda, mediaa);
    
    
    
    return 0;
}
