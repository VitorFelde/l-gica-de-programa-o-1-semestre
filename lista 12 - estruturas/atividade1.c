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

	char opcao;
	int n;


	struct TPessoa {
	
		int codigo, idade;
		char nome[50];
		float peso, altura;
		char genero;
	
	};
	
	struct TPessoa cadastro[TAM];
			
			do {
				
				printf ("a) Cadastro de uma pessoa (as 'n' pessoas devem ser cadastradas antes de qualquer outra operação)");
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
				
				
				
				case 'b':
				
				case 'c':
				
				case 'd':
				
				case 'e':
				
				case 's':
					
					
				}
	
					
			}
			
			while (opcao != 's' && opcao != 'S');
			
			printf ("Digite o número de alunos: ");
			scanf ("%d", &n);
			
			for (int i = 0; i < n; i++) {
			
			cadastro[i].codigo = i+1;
			printf("Nome: ");
			__fpurge(stdin);
			fgets(cadastro[i].nome, 50, stdin);
			printf("Genero: ");
			scanf(" %c", &cadastro[i].genero);
			printf("Peso: ");
			scanf("%f", &cadastro[i].peso);
			printf ("Altura: ");
			scanf ("%f", &cadastro[i].altura);
			printf ("Idade: ");
			scanf ("%d", &cadastro[i].idade);
			
			}
		
			
			
			
return 0;		

}
