/*7) Uma empresa de pesquisa resolveu entrevistar os torcedores do Paraná para saber qual a
maior torcida. Faça um programa que leia um número não conhecido de respostas do time que
torce: A – Atlético, C – Coritiba ou F – Foz. O programa deve encerrar quando for digitado S – sair.
Mostrar ao final o total de torcedores entrevistados, a quantidade de torcedores do Atlético, a
quantidade de torcedores do Coritiba e a quantidade de torcedores do Foz. Ao final, listar a
porcentagem de torcedores de cada time em relação ao total.*/

#include <stdio.h>
#include <ctype.h>

int main () {
    
    char times;
    float porcentagem;
    int total, atle = 0, foz = 0, coxa = 0; 
    
    printf ("Digite A para Atlético - Digite C para Coritiba - Digite F para Foz - Digite S para sair do programa");
    
    
    
    do {
        printf ("Para qual time você torce? [A][C][F][S]?: ");
        scanf (" %c", &times);
        toupper (times);    
        
        if ((times != 'A' && times != 'C' && times != 'F' && times != 'S' ) 
        printf ("Digite uma das resposta disponiveis!");
        
    } while (times != 'A' && times != 'C' && times != 'F' && times != 'S');
    
    
}
