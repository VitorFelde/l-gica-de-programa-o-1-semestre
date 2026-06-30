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
podendo repeti-las até que ele deseje sair do programa.*/

#include <stdio.h>
#include <string.h>
#include <math.h>

#define TAM 10

struct TFuncionario {
    char nome[50];
    int n, graudeestudo, qtdlinguas, cargoocupa;
    float indiceprodutividade, salario;
};

struct TFuncionario cadastro[TAM];

void cadastrar (struct TFuncionario cadastro[], int numerofuncionarios) {
    
    while (getchar() != '\n'); 
    
    for (int i = 0; i < numerofuncionarios; i++) {
        
        printf ("Digite o nome do funcionário: ");

        fgets(cadastro[i].nome, sizeof(cadastro[i].nome), stdin);
         //guardando a resposta, na variavel de posicao i no vetor       
        
        cadastro[i].nome[strcspn(cadastro[i].nome, "\n")] = '\0';
        //limpando buffer
        //procura a quebra de linha \n - e coloca o valor nulo \0 la atraves do strcspn
        
        printf ("Digite o grau de estudo: ");
        scanf ("%d", &cadastro[i].graudeestudo);
        printf ("Digite a quantidade de linguas que voce fala: ");
        scanf ("%d", &cadastro[i].qtdlinguas);
        printf ("Qual o nivel do cargo que você ocupa: ");
        scanf ("%d", &cadastro[i].cargoocupa);
        printf ("Digite seu nivel de produtividade: ");
        scanf ("%f", &cadastro[i].indiceprodutividade);
        while (getchar() != '\n'); //limpa o \n desse ultimo scanf

        cadastro[i].salario = 0; 
        //atribuindo o valor zero pro calculo dar certo dps
    }
}

int fatorial (int graulegal) { 
    //parametro foi passado apenas para receber valor depois, o nome nao importa nesse caso
    int calculo = 1; //comeca em um, pq se fizer o calculo de fatorial
    //começando por zero, sera sempre zero
    for (int i = 1; i <= graulegal; i++)
        calculo = calculo * i;
    return calculo; //depois essa funcao vai ser calculada atraves do grau de estudo na funcao calculofinal
    //colocamos return calculo, pq depois queremos o valor dessa conta
}

int linguas (int numero){
    int calculo1;
    calculo1 = pow (numero, 3); //calculo top, nao tava dando, tinha esquecido a biblioteca la em cima
    return calculo1; 
    //mesma coisa do de cima
}

int salariobase (int nivel) {
    //parametro meramente ilustrativo, pq dps vamos puxar os valores digitados pelo usuario 
    //na funcao calculo final
    float salariodebase = 0;
    if (nivel == 1) { 
        salariodebase = 1000;
    }
    else if (nivel == 2) {
        salariodebase = 1500;
    }
    else if (nivel == 3) {
        salariodebase = 2000;
    }
    else if (nivel == 4) {
        salariodebase = 2500;
    }
    else if (nivel == 5) {
        salariodebase = 3000;
    }
    return salariodebase;
}

void calculofinal (struct TFuncionario cadastro[], int numerofuncionarios) { //buscamos pela struct
//que cadastramos, para que essa função possa pegar os valores do que foi digitado pelo usuario
//ja o numero de funcionarios vai ser puxado la no switch dps, quando eu passar o valor de 
//parametro n, que é a variavel que guarda o numero de funcionarios 

    for(int i = 0; i < numerofuncionarios; i++) { //for para transcorrer pelos funcionarios
        if (cadastro[i].indiceprodutividade > 0.7) {
            cadastro[i].salario = salariobase(cadastro[i].cargoocupa) + (fatorial(cadastro[i].graudeestudo) * 100) + (linguas(cadastro[i].qtdlinguas) * 100) + (salariobase(cadastro[i].cargoocupa) * cadastro[i].indiceprodutividade);
        } 
        //passamos como parametro as posicoes do cadastro, e cada item cadastrado,
        //para que o calculo seja feito certo, e assim em todas as funcoes    

        if (cadastro[i].indiceprodutividade >= 0.4 && cadastro[i].indiceprodutividade <= 0.7) {
            cadastro[i].salario = salariobase(cadastro[i].cargoocupa) + (fatorial(cadastro[i].graudeestudo) * 100) + (linguas(cadastro[i].qtdlinguas) * 100);
        }

        if (cadastro[i].indiceprodutividade < 0.4) {
            cadastro[i].salario = salariobase(cadastro[i].cargoocupa) + (fatorial(cadastro[i].graudeestudo) * 100) + (linguas(cadastro[i].qtdlinguas) * 100) - (salariobase(cadastro[i].cargoocupa) * (0.4 - cadastro[i].indiceprodutividade));
        }
        printf("\nFuncionario: %s", cadastro[i].nome); //mostrando a string
        printf("\nSalario Calculado: R$ %.2f\n", cadastro[i].salario); //mostrando o salario calculado
        printf("\n"); //quebra de linha para ficar harmonico no resultado topzao
    }
}

void acimadamedia(struct TFuncionario cadastro[], int numerofuncionarios) {

    float soma = 0;
    float media = 0;
    int ganhaacima = 0;

    for(int i = 0; i < numerofuncionarios; i++){
        soma = soma + cadastro[i].salario; 
        //fazendo a soma de todos os salários para descobrir o total
    }
    media = soma / numerofuncionarios; 
    //aqui fazemos a media dos salarios

    for(int i = 0; i < numerofuncionarios; i++){
        if(cadastro[i].salario > media){ 
            //se o salario do funcionario na posicao i do vetor for maior que a media
            //vai pra esse incremento topzao aqui embaixo
            //como pedia so a quantidade, fiz desse jeito
            ganhaacima++;  
        }
    }
    printf("\nGanha acima da media: %d\n", ganhaacima);
}

void alterarDados (struct TFuncionario cadastro[], int numerofuncionarios) {
    
    char nomeUsuario[50]; 
    //para digitar o nome do usuario, stringzona
    
    int indiceEncontrado = -1; 
    //para salvar a posição do nome encontrado, e menos 1 pq vetor comeca em 0
    
    int numeroalt;

    while (getchar() != '\n'); 
    //usamos nesse caso para limpar o buffer, por conta de ter um switch case e um scanf

    printf ("Digite o nome do funcionário que quer alterar: ");
    fgets(nomeUsuario, sizeof(nomeUsuario), stdin);
    nomeUsuario[strcspn(nomeUsuario, "\n")] = '\0'; 
    //limpa o \n do fgets

    for (int i = 0; i < numerofuncionarios; i++) {
        if (strcmp(cadastro[i].nome, nomeUsuario) == 0) {
            //fazendo a comparacao com a funcao strcmp
            //se for igual a funcao retorna 0, igual o return 0;
            indiceEncontrado = i; 
            //sera igual i - 1 por conta de comecar 
            //em 0 o vetor
            break; 
            //tive que pesquisar, quando achar ja para de buscar, por isso usamos isso 
        }
    }

    if (indiceEncontrado == -1) { 
        //se o indice for menos 1
        //ou seja se nao retornar 0, é pq nao achou
        
        printf("\nFuncionário não encontrado!\n\n");
        return;
    }

    printf("\nNome: %s\n", cadastro[indiceEncontrado].nome);
    printf("Grau de estudo: %d\n", cadastro[indiceEncontrado].graudeestudo);
    printf("Quantidade de linguas: %d\n", cadastro[indiceEncontrado].qtdlinguas);
    printf("Nivel do cargo: %d\n", cadastro[indiceEncontrado].cargoocupa);
    printf("Indice de produtividade: %.2f\n", cadastro[indiceEncontrado].indiceprodutividade);
    printf("Salario: R$ %.2f\n", cadastro[indiceEncontrado].salario);

    do {
        printf ("\n1 - Alterar Nome\n");
        printf ("2 - Alterar Grau de Estudo\n");
        printf ("3 - Alterar Quantidade de Línguas\n");
        printf ("4 - Alterar Nível do Cargo\n");
        printf ("5 - Alterar Índice de Produtividade\n");
        printf ("6 - Sair da alteração de dados\n");
        printf ("Escolha o campo para alterar: ");
        scanf ("%d", &numeroalt);

        switch (numeroalt) {
            case 1:
                while (getchar() != '\n');
                printf("Digite o novo nome: ");
                fgets(cadastro[indiceEncontrado].nome, sizeof(cadastro[indiceEncontrado].nome), stdin);
                cadastro[indiceEncontrado].nome[strcspn(cadastro[indiceEncontrado].nome, "\n")] = '\0';
                break;
            case 2:
                printf("Digite o novo grau de estudo: ");
                scanf("%d", &cadastro[indiceEncontrado].graudeestudo); //cadastrando na posicao encontrada o novo item
                while (getchar() != '\n');
                break;
            case 3:
                printf("Digite a nova quantidade de línguas: ");
                scanf("%d", &cadastro[indiceEncontrado].qtdlinguas);
                while (getchar() != '\n');
                break;
            case 4:
                printf("Digite o novo nível do cargo: ");
                scanf("%d", &cadastro[indiceEncontrado].cargoocupa);
                while (getchar() != '\n');
                break;
            case 5:
                printf("Digite o novo índice de produtividade: ");
                scanf("%f", &cadastro[indiceEncontrado].indiceprodutividade);
                while (getchar() != '\n');
                break;
            case 6:
                printf("\n"); //dando um espacinho pra ficar bacana
                break;
            default:
                printf("\nOpção inválida!\n");
                while (getchar() != '\n');
                break;
        }
    } while (numeroalt != 6);
}

int main () {
    char opcao;
    int n;
    int cadastrado = 0;

    printf ("Digite o número de funcionários: ");
    scanf ("%d", &n);

    do {
        printf ("a) Cadastrar funcionario\n");
        printf ("b) Calcular salário\n");
        printf ("c) Quantidade maior que a média\n");
        printf ("d) Edição e visualização das informações de um funcionário\n");
        printf ("s) Sair do programa\n\n");
        printf ("Escolha a opção: ");

        scanf (" %c", &opcao);

        switch (opcao) {
            case 'a':
                cadastrar (cadastro, n); 
                //parametro cadastro pra puxar a struct criada com esse nome
                //n é o numero de funcionarios, que passamos no parametro do calculo
                cadastrado = 1;
                //esse 1 é pra dizer que é verdadeiro, ou seja, que existe um cadastro a ser verificado
                //control flag é o nome eu acho
                break;

            case 'b':
                if(cadastrado == 1){
                    //se tiver um cadastro
                    calculofinal (cadastro, n);
                } else {
                    printf("\nNenhum funcionário cadastrado\n");
                }
                break;

            case 'c':
                if(cadastrado == 1){
                    acimadamedia(cadastro, n);
                } else {
                    printf("\nNenhum funcionário cadastrado\n\n");
                }
                break;

            case 'd':
                if(cadastrado == 1){
                    alterarDados(cadastro, n);
                } else {
                    printf("\nNenhum funcionario cadastrado para alterar\n");
                }
                break;
        }
    } while (opcao != 's' && opcao != 'S');

    return 0;
}
