/*7) Uma empresa de pesquisa resolveu entrevistar os torcedores do Paraná para saber qual a
maior torcida. Faça um programa que leia um número não conhecido de respostas do time que
torce: A – Atlético, C – Coritiba ou F – Foz. O programa deve encerrar quando for digitado S – sair.
Mostrar ao final o total de torcedores entrevistados, a quantidade de torcedores do Atlético, a
quantidade de torcedores do Coritiba e a quantidade de torcedores do Foz. Ao final, listar a
porcentagem de torcedores de cada time em relação ao total.*/

#include <stdio.h>
#include <ctype.h> /*para usar o toupper*/

int main () {
    
    char times;
    float porcentagem;
    int total, atle = 0, foz = 0, coxa = 0; 
    
    printf ("Digite A para Atlético - Digite C para Coritiba - Digite F para Foz - Digite S para sair do programa");
    /*deixando mais claro para o usuario o que ele deve digitar*/
    
    
    
    do {
        printf ("\nPara qual time você torce? [A][C][F][S]?: "); 
        /*fazer enquanto a condição do while não for satisfeita*/
        scanf (" %c", &times);
        
        times = toupper (times); /*transformar tudo em maiúsculo*/
        
        if ((times != 'A' && times != 'C' && times != 'F' && times != 'S' ))
        /*se o user nao colocar nenhuma das disponiveis mostrar o printf abaixo*/
        printf ("Digite uma das resposta disponiveis!\n");
        
        if (times == 'S') {
        /*se o usuario digitar s, sai do programa*/
        printf ("\nSaindo do programa.\n"); 
       
        } else if (times == 'A'){
        /*quando digita o a, o atletico que era 0 aumenta 1, e a mesma coisa pros outros*/
        atle++;
        
        } else if (times == 'C'){
        coxa++;
        
        } else if (times == 'F'){
        foz++;
            
        }
    
        total = (foz + coxa + atle);
     
        
    } while (times != 'S');
    
    printf ("O total de torcedores do Atlético é: %d de %d\n", atle, total);
    printf ("O total de torcedores do Coritiba é: %d de %d\n", coxa, total);
    printf ("O total de torcedores do Foz é: %d de %d\n", foz, total);
    
    printf("Porcentagem Atletico: %.2f%%\n", (float)atle / total * 100);
    printf("Porcentagem Coritiba: %.2f%%\n", (float)coxa / total * 100);
    printf("Porcentagem Foz: %.2f%%\n", (float)foz / total * 100);

    /*usando duas % para poder mostrar uma pro usuario
    .2f para 2 casas apos a virgula
    utilizando o (cast) para dar certo a divisao
    multiplicando por cem para aparecer "inteiro" para o usuario, e não um numero pequeno
    os printf's estao fora do loop pq se não toda vez que respondesse, ia mostrar as mensagens
    
    ignora professora, uso os comentarios para nn me perder e também para estudar*/
   
    return 0;
}
