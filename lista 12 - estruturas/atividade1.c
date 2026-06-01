/*Crie uma struct chamado TPessoa para armazenar os seguintes dados:
codigo (inteiro)
nome (string)
gênero (char)
idade (inteiro)
altura (real)
peso (real)
Faça um programa para ler uma quantidade indeterminada de pessoas (solicitar o valor 'n'
para o usuário; declarar um vetor chamado cadastro de TPessoa com um tamanho
constante TAM e controlar o uso do vetor com a variável 'n').
O menu do programa deve apresentar as seguintes opções:
a) Cadastro de uma pessoa (as 'n' pessoas devem ser cadastradas antes de
qualquer outra operação);
b) Alterar os dados de uma pessoa (informada pelo usuário através do
código.);
* Dentro da opção de Alterar, será necessário incluir um novo menu
solicitando qual dos campos se deseja alterar (identificar os campos por
número como opções do menu) e o usuário pode escolher somente um
campo por vez, mas o menu deve permanecer enquanto o usuário não
escolher a opção de sair do modo de edição.
c) Excluir uma pessoa (deixar todos os campos vazios através do código
informado pelo usuário).
d) Mostrar os dados de apenas uma pessoa (informada pelo usuário através do
código);
e) Mostrar os dados de todos os cadastros;*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM 100

int main () {

	char opcao, opcao1;
	int n, n1, contador = 0, excluido;


	struct TPessoa {
	
		int codigo, idade;
		char nome[50];
		float peso, altura;
		char genero;
		
	};
	
	struct TPessoa cadastro[TAM];
			
			do {
				
				printf ("\na) Cadastro de uma pessoa (as 'n' pessoas devem ser cadastradas antes de qualquer outra operação)");
				printf ("\nb) Alterar os dados de uma pessoa (informada pelo usuário através do código.)");
				printf ("\nc) Excluir uma pessoa (deixar todos os campos vazios através do código informado pelo usuário.");
				printf ("\nd) Mostrar os dados de apenas uma pessoa (informada pelo usuário através do código");
				printf ("\ne) Mostrar os dados de todos os cadastros");
				printf ("\ns) Sair do programa\n");
				
				printf ("\n");
				printf ("Digite a opção: ");
				
				scanf (" %c", &opcao);
				
				
				switch (opcao) {
					
				case 'a':
				
				printf ("Digite o número de alunos: ");
				scanf ("%d", &n);
				
				contador = n;
				
				for (int i = 0; i < n; i++) {
					
					cadastro[i].codigo = i+1;
					printf("Nome: ");
				
					//SUBSTUTUTO DO FPURGE: Consome o '\n' que sobrou no buffer do scanf anterior
					//tive que pesquisar, pois estava fazendo no compilador online, que nao aceitava
					//o __fpurge, dai usei isso
					while (getchar() != '\n'); 
					
					fgets(cadastro[i].nome, 50, stdin);
					
					// Remove o '\n' que o fgets armazena automaticamente no fim da string
					//mesma coisa do de cima
					cadastro[i].nome[strcspn(cadastro[i].nome, "\n")] = '\0';
					
					printf("Genero: ");
					scanf(" %c", &cadastro[i].genero);
					printf("Peso: ");
					scanf("%f", &cadastro[i].peso);
					printf ("Altura: ");
					scanf ("%f", &cadastro[i].altura);
					printf ("Idade: ");
					scanf ("%d", &cadastro[i].idade);
					
				}
				
				break;
				
				case 'b':
				
				printf ("Digite o número do cadastro que quer alterar: ");
				scanf ("%d", &n1);
				
				if (n1 <= contador) {
				
				do {
				
				
				printf ("Digite a opção que quer alterar, ou 6 para sair do programa: ");
				printf ("\n1 - Nome\n");
				printf ("2 - Genero\n");
				printf ("3 - Peso\n");
				printf ("4 - Altura\n");
				printf ("5 - Idade\n");
				printf ("6 - Sair da alteração de dados:\n");
				
				scanf (" %c", &opcao1);
				
				
				switch (opcao1) {
					
					case '1': 
					printf("Novo nome: ");
					
					while (getchar() != '\n'); 
					fgets(cadastro[n1 - 1].nome, 50, stdin);
					
					cadastro[n1 - 1].nome[strcspn(cadastro[n1 - 1].nome, "\n")] = '\0';
					break;
					
					case '2': 
					
					printf("Novo genero: ");
					scanf(" %c", &cadastro[n1 - 1].genero);
					
					break;
					
					case '3':
					
					printf("Novo peso: ");
					scanf("%f", &cadastro[n1 - 1].peso);
					
					break;
					
					case '4':
					
					printf ("Nova altura: ");
					scanf ("%f", &cadastro[n1- 1].altura);
					
					break;
					
					case '5':
					
					printf ("Nova idade: ");
					scanf ("%d", &cadastro[n1 - 1].idade);
					
					break;
					
					
					case '6':
					
					printf ("\nSaindo da alteração de dados, e retornando ao menuzão legal\n");
					
					break;
					
					default:
					
					printf ("Digite uma das opções validas!");
					
					}
				}
			
				while (opcao1 != '6');
			
				}
				else 
					printf ("Número de cadastro não encontrado! Digite um válido");
				
				break;
				
				case 'c':
				
				printf ("Digite o número de cadastro que quer excluir: ");
				scanf ("%d", &excluido);
				
				if (excluido > 0 && excluido <= contador) {
				
				cadastro[excluido].idade = 0;
				strcpy(cadastro[excluido - 1].nome, " "); //atribuindo como é string o vazio para o nome
				cadastro[excluido - 1].peso = 0;
				cadastro[excluido - 1].altura = 0;
				cadastro[excluido - 1].genero = '\0';
				
				printf ("Cadastro excluído\n");
				
				printf ("Cadastro %d agora é: \n", excluido);
				
				printf ("Nome: %s\n", cadastro[n].nome);
				printf("Genero: %c\n", cadastro[n].genero);
				printf("Peso: %.2f\n", cadastro[n].peso);
				printf ("Altura: %.2f\n", cadastro[n].altura);
				printf ("Idade: %d\n", cadastro[n].idade);
			}
			
			else {
				printf ("\nNúmero de cadastro não encontrado\n");
			}
				break;
				
				case 'd':
				
				printf ("Digite o número do aluno desejado: ");
				scanf ("%d", &n1);
				
				if (contador > 0) {
					printf("\n%s\n", cadastro[n1 - 1].nome);
					printf (" %c\n", cadastro[n1 - 1].genero);
					printf ("%.2f\n", cadastro[n1 - 1].peso);
					printf ("%.2f\n", cadastro[n1 - 1].altura);
					printf ("%d\n", cadastro[n1 - 1].idade);
				}
				
				
				else {
					printf ("\nNumero de cadastro não encontrado\n");
				}
				
				break;
				
				case 'e':
				
				for (int i = 0; i < n; i++) {
					
					printf("\nNome: %s\n", cadastro[i].nome);
					printf ("Genero: %c\n", cadastro[i].genero);
					printf ("Peso: %.2f\n", cadastro[i].peso);
					printf ("Altura: %.2f\n", cadastro[i].altura);
					printf ("Idade: %d\n", cadastro[i].idade);
					
				}
				
				break;
				case 's':
					
					printf ("Saindo do programa topzera...");
					
				break;	
				}
	
					
			}
			
			while (opcao != 's' && opcao != 'S');
		
			
			
			
return 0;		

}
