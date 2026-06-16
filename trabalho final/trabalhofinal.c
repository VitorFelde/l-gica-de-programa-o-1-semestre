/*Desenvolva um programa capaz de obter os seguintes dados de pessoas que trabalham em uma
empresa: (a) nome; (b) grau de estudo: 1, 2, 3, 4 ou 5; (c) quantidade de línguas que fala; (d)
cargo que ocupa: 1º, 2º, 3º ou 4º nível; (e) seu índice de produtividade: entre 0 e 1,0.
Baseado nisto, o programa deve atender aos seguintes requisitos:
1) Os dados das pessoas devem ser tratados por uma struct chamada Funcionario.
2) A estrutura Funcionario também deve comportar o salário do funcionário, a ser calculado a
pedido do usuário.
3) O usuário informará quantas pessoas trabalham na empresa, o que implica em alocar uma
quantia de memória apropriada (n) para ‘variáveis’ do tipo Funcionario.
4) O cálculo do salário será feito segundo um conjunto de fatores, sendo um primeiro fator a
formação. Este fator deve ser calculado em uma função que retorna o fatorial do grau de
instrução da pessoa (1º, 2º, 3º, 4º ou 5º grau).
5) Outro fator será chamado de poliglota e será calculado por uma função que recebe a
quantidade de línguas faladas pela pessoa e a eleva ao cubo, retornando isto como resultado.
6) Há ainda o fator salário base que varia conforme o nível da pessoa. Por exemplo, nível 1 (R$
1.000,00), nível 2 (R$ 1.500,00), nível 3 (R$ 2.000,00) e assim por diante. O fator salário base é
calculado em uma função que recebe como parâmetro o nível e retorna o salário base.
7) O salário será calculado, em uma função, pela seguinte regra:
Se Índice de Produtividade > 0,7 então
Salário = (Salário base + (Formação*100) + (Poliglota*100)) + (Salário base* Índice de
Produtividade).
Se Índice de Produtividade entre 0,4 e 0,7 então
Salário = (Salário base + (Formação*100) + (Poliglota*100))
Se Índice de Produtividade < 0,4 então
Salário = (Salário base + (Formação*100) + (Poliglota*100)) - (Salário base* (0,4 - Índice de
Produtividade))
8) O programa deve ainda disponibilizar, também por uma função, a quantidade de funcionários
que ganham acima da média.
9) Alterar os dados de um funcionário (informado pelo usuário através do nome.); Dentro da opção
de Alterar, será necessário incluir um novo menu solicitando qual dos campos se deseja alterar
(identificar os campos por número como opções do menu) e o usuário pode escolher somente um
campo por vez, mas o menu deve permanecer enquanto o usuário não escolher a opção de sair
do modo de edição.
10) Por fim, o programa permitirá ao usuário escolher entre funcionalidades (cadastro, cálculo de
salário, quantidade maior que a média, e edição e visualização das informações de um
determinado funcionário). O usuário poderá escolher as funcionalidades por meio de um menu,
podendo repeti-las até que ele deseje sair do programa*/


#include <stdio.h>
#include <string.h>
#include <math.h>

#define TAM 1000

	struct TFuncionario {
		
		
	char nome[50];
	int n, graudeestudo, linguas, cargoocupa;
	float indiceprodutividade, salario;
		
	};
	
	struct TFuncionario cadastro[TAM];
	
	int cadastrar (struct TFuncionario cadastro[], int numerofuncionarios) {
	
	printf ("Digite o numero de funcionarios que tem na firma top: ");
	
	printf ("Digite o nome do funcionário: ");
	fgets (cadastro.[i].nome, sizeof(nome), stdin);
	
	
	
	}
	
	
	int main () {
		
		char opcao;
		int n;
		
		printf ("Digite o número de funcionários: ");
		scanf ("%d", &n);
		
		
		
		do {
			
			printf ("a) cadastrar funcionario");
			printf ("\nb) calcular salário");
			printf ("\nc) quantidade maior que a média");
			printf ("\nd) cadastrar tenis");
			printf ("\ne) cadastrar tenis");
			printf ("f) cadastrar tenis");
		
			scanf (" %c", &opcao);
			
			switch (opcao) {
				
			case 'a':
			
			cadastrar (cadastro, n);
			
			break;	
			
			case 'b':
			
			break;
			
			case 'c':
			
			break;
			
			case 'd':
			
			break;
			
			case 'e':
			
			break;
			
			case 'f':
			
			break;
				
			}
			
			
		}	
		
		while (opcao != 's' && opcao != 'S');
		
	return 0;	
		}
	
	
	
	
