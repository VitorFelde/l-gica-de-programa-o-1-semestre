/*5) Faça um programa para ler uma matriz 5x5, cujos elementos são do tipo inteiro. Em seguida,
o programa deve possuir um menu com opções para cada uma das seguintes operações:
(a) Mostrar todos os elementos da matriz (na forma de uma matriz LxC);
(b) Mostrar todos os elementos da quarta linha da matriz e da primeira coluna da matriz;
(c) Mostrar a soma dos elementos da diagonal principal;
(d) Atribuir o valor 0 para os valores negativos encontrados fora da diagonal principal;
(e) Buscar um elemento na matriz. O programa deve ler um valor X e buscar esse valor na
matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não
encontrado”.*/

#include <stdio.h>

int main()
{
    
    int matriz[5][5], i, j, soma = 0, opcaoE;
    char opcao;
    
    for (i = 0; i < 5; i++) 
		
		for (j = 0; j < 5; j++) {
		    printf ("Digite o valor da Matriz na posição: [%d][%d]:", i, j );  
		    scanf ("%d", &matriz[i][j]);
		}
    
    do {
        
  
        printf("\na) Mostrar todos os elementos da matriz (na forma de uma matriz LxC)\n");
        printf("b) Mostrar todos os elementos da quarta linha e da primeira coluna\n");
        printf("c) Mostrar a soma dos elementos da diagonal principal\n");
        printf("d) Atribuir o valor 0 para os valores negativos fora da diagonal\n");
        printf("e) Buscar um elemento na matriz\n");
        printf("s) Fechar o programa\n");
        
        printf("\nQual opcao deseja escolher?: ");
        scanf (" %c", &opcao);
        
        switch (opcao) {
            
            case 'a': 
                for (i = 0; i < 5; i++) {
		
		            for (j = 0; j < 5; j++) {
		                printf (" [%d]", matriz[i][j]); //aqui ta apenas mostrando os elementos da matriz
		            }
		            printf ("\n");
                }      
            break;
            
            case 'b': 
                for (j = 0; j < 5; j++) {
                    printf ("[%d]", matriz[0][j]); // apenas o j que é a colunas pois é o que varia
                }
            break;
            
            case 'c': 
                soma = 0; //fazendo isso para que toda vez que reiniciar, fiue em 0, e nao o valor da op passada
                for (i = 0; i < 5; i++)
                    for(j = 0; j < 5; j++) {
                        if(i==j) { //logica p saber a coluna principal (peguei dos slides da aula)
                            soma = soma + matriz[i][j]; //somando quem entrar na condicao do if
                        }
                    }
            printf ("Soma da diagonal principal: %d", soma);
            break;
            
            case 'd': 
                for (i = 0; i < 5; i++)
                    for(j = 0; j < 5; j++) {
                        if (i != j && matriz[i][j] < 0) {//condicao p ver se nao estiver na diagonal principal, e se a matriz for negativa
                            matriz[i][j] = 0; //se entrar na cond do if, recebe (=) o valor 0 
                            //valores foram atribuidos, mas nao entendi como poderia printar, e a senhora
                            //tbm nao solicitou isso, quem for negativo recebe o valor 0
                        }
                        
                    }
            break;
            
            case 'e': 
                printf ("Digite o elemento da matriz que deseja encontrar: ");
                scanf ("%d", &opcaoE);
                    for (i = 0; i < 5; i++)
                        for(j = 0; j < 5; j++) {
                            
                            if (opcaoE == matriz[i][j]) //desses elementos
                            printf ("[%d][%d]", i, j); //mostrando as posicoes
                            
                            else 
                            printf (" não encontrado "); //foi o unico jeito que achei de fazer, mas repete 5 vezs
                            
                        }
                
            break;
            
            default :
                printf ("opcao invalida, digite uma letra valida");
        }
        
    }
    
    while (opcao != 's');
	        
    
    return 0;
}

//professora do ceu, que codigo dificil, usei um pouco de ia, confesso, 
//tentei usar o minimo possivel,e
//sempre que uso tento entender a logica
//por tras, mas esse tava bem dificil
//e desculpa se errei alguma identacao, pq tava tao dificil, que confesso que identei so onde
//lembrei kkkkk
