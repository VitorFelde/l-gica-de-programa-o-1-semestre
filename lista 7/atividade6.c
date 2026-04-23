/*6) Faça um programa para ler duas notas A e B de um aluno, e calcular a média ponderada entre
estas notas (A tem peso 1 e B tem peso 2). Repetir este procedimento para uma turma composta
por um número variado de alunos. Ou seja, após calcular e imprimir a média de um aluno, exibir
uma mensagem perguntando ao usuário se existem mais alunos (resposta: s/n). Se tiver mais
alunos, continuar o procedimento de leitura das notas e o cálculo da média até que o usuário
responda 'n'. Caso a resposta não seja s ou n, indicar ao usuário que a resposta dada está
incorreta e solicitar novamente para que ele responda a pergunta 'continuar (s/n)'. Repetir este
processo até que o usuário entre com uma resposta correta. Utilize o comando do-while.
*/

#include <stdio.h>

int main () {
    
    char resposta;
    float media, a, b, pesoa, pesob;
    
    do {
        printf ("Digite a nota A: ");
        scanf ("%f", &a);
        
        printf ("Digite a nota B: ");
        scanf ("%f", &b);
        
        pesoa = (a * 1);
        pesob = (b * 2);
        
        media = (pesoa + pesob) / 3;
        
        printf ("Média das notas considerando o peso de cada é: %.2f\n", media);
        
        do { /*este segundo do while, serve para perguntar ao usuario se ele quer prosseguir*/
           
            printf ("Deseja continuar? [s] [n]?: ");
            scanf (" %c", &resposta);
            
            if (resposta != 'S' && resposta != 's' && resposta != 'n' && resposta != 'N')
            printf ("Resposta invalida, digite s ou n\n");
              
        } while (resposta != 'S' && resposta != 's' && resposta != 'n' && resposta != 'N'); 
        /*enquanto a respota for diferente de s ou n, o programa vai perguntar novamente graças
        ao printf embaixo do do, e vai dizer que está errado caso o usuario digite um caractere invalido
        graças ao if*/
        
    } while (resposta == 'S' || resposta == 's'); /*enquanto a resposta do usuário for s ou S, 
    vai solicitar as notas e fazer a media, quando for n, ou outro caractere, entra no outro do while
    por isso um está dentro do outro*/

    return 0;
}
