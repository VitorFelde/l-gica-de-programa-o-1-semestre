/* Foi realizada uma pesquisa de algumas características físicas da população de uma certa
região. Foram entrevistadas 50 pessoas e coletados os seguintes dados:
Gênero: M (Masculino) e F (Feminino);
Cor do olhos: A (Azuis), V (Verdes), P (Pretos) e C (Castanhos);
Cor dos cabelos: L (Louros), C (Castanhos) e P (Pretos);
Idade;
Deseja-se saber:
A menor idade do grupo;
A quantidade de indivíduos do sexo masculino, cuja idade está entre 16 e 24 anos e que
tenham olhos azuis e cabelos castanhos;
A quantidade de indivíduos do sexo femenino, cuja idade seja menor que 40 anos e que
tenham olhos e cabelos pretos;*/

#include <stdio.h>
#include <ctype.h>

int main () {
    
    char cabelos, gen, olhos;
    int idade, menoridade, contmasc = 0, contfem = 0, i = 0;
    
    printf("Gênero: M (Masculino) e F (Feminino);\nCor do olhos: A (Azuis), V (Verdes), P (Pretos) e C (Castanhos);\nCor dos cabelos: L (Louros), C (Castanhos) e P (Pretos);\nIdade;\n");
    
    do {
        printf ("\nDigite seu gênero [M][F]: ");
        scanf (" %c", &gen);
        gen = toupper (gen);
        
        printf ("Digite a cor dos seu olhos [A][V][P][C]: ");
        scanf (" %c", &olhos);
        olhos = toupper (olhos);
          
        printf ("Digite a cor do se cabelo [L][C][P]: ");
        scanf (" %c", &cabelos);
        cabelos = toupper (cabelos);
          
        printf ("Digite sua idade: ");
        scanf ("%d", &idade);

        /* inicializa a menor idade com o valor da primeira pessoa para ter uma base de comparação */
        if (i == 0) {
            menoridade = idade;
        } else if (idade < menoridade) {
            menoridade = idade;
        }

        /* verifica os critérios específicos para homens (idade entre 16-24, olhos azuis e cabelos castanhos) */
        if (gen == 'M' && (idade >= 16 && idade <= 24) && olhos == 'A' && cabelos == 'C') {
            contmasc++;
        }

        /* verifica os critérios para mulheres (idade < 40, olhos e cabelos pretos) */
        if (gen == 'F' && idade < 40 && olhos == 'P' && cabelos == 'P') {
            contfem++;
        }

        i++; 
    } while (i < 50); // garante que o laço rode exatamente as 50 vezes pedidas
    
    printf("\nMenor idade do grupo: %d", menoridade);
    printf("\nHomens (16-24 anos, olhos azuis, cabelos castanhos): %d", contmasc);
    printf("\nMulheres (< 40 anos, olhos e cabelos pretos): %d", contfem);

    return 0;
}
