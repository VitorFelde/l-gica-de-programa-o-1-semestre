/*8) Para um grupo indeterminado de pessoas descobrir:
A mulher mais velha
O homem mais novo
A pessoa com maior peso
A pessoa com menor peso
Utilize a opção de solicitar ao usuário se deseja ler os dados de mais uma pessoa para continuar
o programa*/

#include <stdio.h>
#include <ctype.h> /*para o toupper*/

int main () {
    
    float peso, maior = 0, menor = 999;
    int idade, novo = 999, velha = 0, hom = 0, mul = 0;
    char soli, gen;
    
    do {
        printf ("Digite seu gênero: [M][F]: ");
        scanf (" %c", &gen);
        
        gen = toupper (gen);
        
        printf ("Digite sua idade: ");
        scanf ("%d", &idade);
        
        printf ("Digite seu peso: ");
        scanf ("%f", &peso);
        
        printf ("Deseja ler os dados de mais uma pessoa?[S][N]: ");
        scanf (" %c", &soli);
        
        soli = toupper (soli);
            
            if (gen == 'M')
            hom++;
            
            if (gen == 'F') {
            mul++;
        }
        
        if (peso > maior) {
            maior = peso;
        }
        
        if (peso < menor){
            menor = peso;
        }
    
        if (gen == 'M') { //mesma coisa do de baixo
            hom++;
            if (idade < novo) {
                novo = idade;
            }
        } 
        
        else if (gen == 'F') { //para saber se é mulher, e dai contabiliza a idade
            mul++; /*boa pratica*/
            if (idade > velha) {
            velha = idade;
            }
        }
    
        
    } while (soli == 'S');
    
    printf ("\nO homem mais novo tem: %d\n", novo);
    printf ("A mulher mais velha tem: %d\n", velha);
    printf ("A pessoa com mais peso tem: %.2f\n", maior);
    printf ("A pessoa com menor peso tem: %.2f\n", menor);
    
    return 0;
}
