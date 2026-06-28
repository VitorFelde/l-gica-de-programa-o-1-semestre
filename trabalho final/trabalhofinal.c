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
        cadastro[i].nome[strcspn(cadastro[i].nome, "\n")] = '\0';

        printf ("Digite o grau de estudo: ");
        scanf ("%d", &cadastro[i].graudeestudo);
        printf ("Digite a quantidade de linguas que voce fala: ");
        scanf ("%d", &cadastro[i].qtdlinguas);
        printf ("Qual o nivel do cargo que você ocupa: ");
        scanf ("%d", &cadastro[i].cargoocupa);
        printf ("Digite seu nivel de produtividade: ");
        scanf ("%f", &cadastro[i].indiceprodutividade);

        
        while (getchar() != '\n');

        cadastro[i].salario = 0;
    }
}

int fatorial (int graulegal) {
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

void calculofinal (struct TFuncionario cadastro[], int numerofuncionarios) {
    for(int i = 0; i < numerofuncionarios; i++) {
        if (cadastro[i].indiceprodutividade > 0.7) {
            cadastro[i].salario = salariobase(cadastro[i].cargoocupa) + (fatorial(cadastro[i].graudeestudo) * 100) + (linguas(cadastro[i].qtdlinguas) * 100) + (salariobase(cadastro[i].cargoocupa) * cadastro[i].indiceprodutividade);
        }

        if (cadastro[i].indiceprodutividade >= 0.4 && cadastro[i].indiceprodutividade <= 0.7) {
            cadastro[i].salario = salariobase(cadastro[i].cargoocupa) + (fatorial(cadastro[i].graudeestudo) * 100) + (linguas(cadastro[i].qtdlinguas) * 100);
        }

        if (cadastro[i].indiceprodutividade < 0.4) {
            cadastro[i].salario = salariobase(cadastro[i].cargoocupa) + (fatorial(cadastro[i].graudeestudo) * 100) + (linguas(cadastro[i].qtdlinguas) * 100) - (salariobase(cadastro[i].cargoocupa) * (0.4 - cadastro[i].indiceprodutividade));
        }
        printf("\nFuncionario: %s", cadastro[i].nome);
        printf("\nSalario Calculado: R$ %.2f\n", cadastro[i].salario);
        printf("\n");
    }
}

void acimadamedia(struct TFuncionario cadastro[], int numerofuncionarios) {
    float soma = 0;
    float media = 0;
    int ganhaacima = 0;

    for(int i = 0; i < numerofuncionarios; i++){
        soma = soma + cadastro[i].salario; //somando os salario para poder saber o total de todos os funcionarios 
    }
    media = soma / numerofuncionarios; //media dos salarios 

    for(int i = 0; i < numerofuncionarios; i++){
        if(cadastro[i].salario > media){ //quando o salario for maior que a media
            ganhaacima++;  //incrementa um aqui topzao
        }
    }
    printf("\nGanha acima da media: %d\n\n", ganhaacima);
}

void alterarDados (struct TFuncionario cadastro[], int numerofuncionarios) {
    char nomeUsuario[50];
    int indiceEncontrado = -1;
    int numeroalt;

    while (getchar() != '\n');

    printf ("Digite o nome do funcionário que quer alterar: ");
    fgets(nomeUsuario, sizeof(nomeUsuario), stdin);
    nomeUsuario[strcspn(nomeUsuario, "\n")] = '\0';

    for (int i = 0; i < numerofuncionarios; i++) {
        if (strcmp(cadastro[i].nome, nomeUsuario) == 0) {
            indiceEncontrado = i;
            break;
        }
    }

    if (indiceEncontrado == -1) {
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
                scanf("%d", &cadastro[indiceEncontrado].graudeestudo);
                break;
            case 3:
                printf("Digite a nova quantidade de línguas: ");
                scanf("%d", &cadastro[indiceEncontrado].qtdlinguas);
                break;
            case 4:
                printf("Digite o novo nível do cargo: ");
                scanf("%d", &cadastro[indiceEncontrado].cargoocupa);
                break;
            case 5:
                printf("Digite o novo índice de produtividade: ");
                scanf("%f", &cadastro[indiceEncontrado].indiceprodutividade);
                break;
            case 6:
                printf("\nSaindo do modo de edição.\n\n");
                break;
            default:
                printf("\nOpção inválida!\n");
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
                cadastrado = 1;
                break;

            case 'b':
                if(cadastrado == 1){
                    calculofinal (cadastro, n);
                } else {
                    printf("\nNenhum funcionário cadastrado\n\n");
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
