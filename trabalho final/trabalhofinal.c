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
#include <stdio_ext.h>

#define TAM 10

	struct TFuncionario {
		
		
	char nome[50];
	int n, graudeestudo, qtdlinguas, cargoocupa;
	float indiceprodutividade, salario;
		
	};
	
	struct TFuncionario cadastro[TAM];
	
	void cadastrar (struct TFuncionario cadastro[], int numerofuncionarios) {
	
	for (int i = 0; i < numerofuncionarios; i++) {
	
	printf ("Digite o nome do funcionário: ");
	__fpurge(stdin);
	fgets (cadastro[i].nome, sizeof(cadastro[i].nome), stdin);
	printf ("Digite o grau de estudo: ");
	scanf ("%d", &cadastro[i].graudeestudo);
	printf ("Digite a quantidade de linguas que voce fala: ");
	scanf ("%d", &cadastro[i].qtdlinguas);
	printf ("Qual o nivel do cargo que você ocupa: ");
	scanf ("%d", &cadastro[i].cargoocupa);
	printf ("Digite seu nivel de produtividade: ");
	scanf ("%f", &cadastro[i].indiceprodutividade);
	}
	
	}
	
	int fatorial (int graulegal) { //colocamos um parametro, pois depois na main, vamos atribuir o valor do parametro, nao é necessario
		//chamar a struct, fica muito mais facil fazer dessa forma
	
		int calculo = 1;
		
		for (int i = 1; i <= graulegal; i++) 
		
		calculo = calculo * i;

	return calculo;

	}
	
	int linguas (int numero){
	
		int calculo1;
	
		calculo1 = pow (numero, 3);
	
	return calculo1;
	
	}
	
	int salariobase (int nivel) {
		
		float salariodebase;
		
		if (nivel == 1) {
			
			salariodebase = 1000;
			
			}
			
		else if (nivel == 2)	{
			
			salariodebase = 1500;
			
			}
		
		else if (nivel == 3)	{
			
			salariodebase = 2000;
			
		}
		
		else if (nivel == 4)	{
			
			salariodebase = 2500;
			
		}
		
		else if (nivel == 5)	{
			
			salariodebase = 3000;		
			
		}
		
		return salariodebase; 
		
	}

	void calculofinal (struct TFuncionario cadastro[], int numerofuncionarios) {
		
		for  (int i = 0; i < numerofuncionarios; i++) {
			
			if (cadastro[i].indiceprodutividade > 0.7) {
				
				cadastro[i].salario = salariobase (cadastro[i].cargoocupa) + (fatorial (cadastro[i].graudeestudo) * 100) + (linguas (cadastro[i].qtdlinguas) * 100) - (salariobase (cadastro[i].cargoocupa) * (0.04 - cadastro[i].indiceprodutividade));
				
				}
			
			
			
			
			
			
			
			
			
			
			
			}
		
		
		
		
		
		
		
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
			printf ("\nf) cadastrar tenis\n\n");
		
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
	
