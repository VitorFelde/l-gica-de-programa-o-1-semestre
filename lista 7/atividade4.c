/*4) Faça um programa que realize uma pesquisa de satisfação quanto a espectadores que
acabaram de assistir a um filme. A pesquisa deve solicitar a idade do espectador, se gostou do
filme, [S] ou [N], e se recomendaria o filme para colegas, [S] ou [N]. Ao final relacione o total de
espectadores, o total de votos e o total de recomendações. A condição de parada é que seja
digitado 0 (zero) para a idade do espectador*/

#include <stdio.h>

int main()
{
    
    int idade, contpessoas = 0, contsatis = 0, contreco = 0, i = 0;
    char satis, reco;
    
    printf ("Digite sua idade: ");
    scanf ("%d", &idade);
    
    while (idade > 0) {
        
        printf ("Gostou do filme: [S][N]: ");
        scanf (" %c", &satis);
        
        printf ("Recomendaria o filme: [S][N]: ");
        scanf (" %c", &reco);
        
        printf ("Digite sua idade: ");
        scanf ("%d", &idade);
        
        contpessoas++; 
       
        if (satis == 's' || satis == 'S') {
        
        contsatis++; }
        
        if (reco == 's' || reco == 'S') {
        
        contreco++; 
        
    }
    
        }
        
        printf ("O total de pessoas que votaram é: %d", contpessoas);
        
        printf ("\nO total de pessoas que gostaram do filme é: %d", contsatis);
        
        printf ("\nO total de pessoas que recomendariam o filme é: %d", contreco);

    return 0;
}
