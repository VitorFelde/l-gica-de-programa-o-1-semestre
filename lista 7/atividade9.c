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
    int idade, contmasc = 0, contfem = 0, i = 0;
    
    printf("Gênero: M (Masculino) e F (Feminino); Cor do olhos: A (Azuis), V (Verdes), P (Pretos) e C (Castanhos); Cor dos cabelos: L (Louros), C (Castanhos) e P (Pretos); Idade;");
    /*para ajudar o user*/
    
    do {
        printf ("\nDigite seu gênero [M][F]: ");
        scanf (" %c", &gen);
        gen = toupper (gen);
        
        printf ("\nDigite a cor dos seu olhos [A][V][P][C]: ");
        scanf (" %c", &olhos)
        olhos = toupper (olhos);
          
        printf ("Digite a cor do se cabelo [L][C][P]: ");
        scanf (" %c", &cabelo)
        cabelo = toupper (cabelo);
          
        printf ("Digite sua idade: ");
        scanf ("%d", &idade)
    }
    
    while 
    
    
    
    
    
    
}
