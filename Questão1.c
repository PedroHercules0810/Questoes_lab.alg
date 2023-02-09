#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario
{

    char nome[50];
    float salario;
    char cargo[50];
    int id;

} Funcionario;

void imprime(Funcionario *funcionario, int num_funcionarios)
{

    for (int j = 0; j < num_funcionarios; j++)
    {
        printf("\n");
        printf("Funcionario [%d] \n", j + 1);
        printf("nome: %s \n", funcionario[j].nome);
        printf("salario: %.2f \n", funcionario[j].salario);
        printf("cargo: %s \n", funcionario[j].cargo);
        printf("Identificador: %d \n", funcionario[j].id);
        printf("\n");
        printf("========================================================");
        printf("\n");
    }
}

void altera_salario(Funcionario *funcionario)
{

    float novo_salario;

    printf("\n");
    printf("========================================================");
    printf("\n");

    printf("Qual o novo salario: ");
    scanf("%f", &novo_salario);

    printf("\n");
    printf("========================================================");
    printf("\n");

    funcionario->salario = novo_salario;
}

void maior_menor_salario(Funcionario * funcionario, int * qnt_funcionarios)
{
    int i;
    float maior, menor;



    for (i = 0; i < qnt_funcionarios; i++)
    {

        if (i == 0)
        {
            maior = funcionario[i].salario;
            menor = funcionario[i].salario;
        }
        

        if (funcionario[i].salario > maior)
        {
            maior = funcionario[i].salario;
        }
        if (funcionario[i].salario < menor);
        {
            menor = funcionario[i].salario;
        }
    }
    
    printf("O maior salário é %f \n", maior);
    printf("O menor salário é %f \n", menor);

}

int main(void)
{

    int num_funcionarios, i;

    printf("Quantos funcionários deseja cadastrar: ");
    scanf("%d", &num_funcionarios);

    Funcionario *funcionario = (Funcionario *)malloc(num_funcionarios * sizeof(Funcionario));

    for (i = 0; i < num_funcionarios; i++)
    {
        printf("\n");
        printf("Digite o nome do usuario %d: ", i + 1);
        scanf(" %[^\n]", &funcionario[i].nome);

        printf("Digite o salario do usuario %d: ", i + 1);
        scanf("%f", &funcionario[i].salario);

        printf("Digite o cargo do usuario %d: ", i + 1);
        scanf(" %[^\n]", &funcionario[i].cargo);

        printf("Digite o id do usuario %d: ", i + 1);
        scanf("%d", &funcionario[i].id);

        printf("\n");
        printf("========================================================");
        printf("\n");
    }

    imprime(funcionario, num_funcionarios);

    printf("========================================================");
    printf("\n");

    maior_menor_salario(funcionario, num_funcionarios);

    int funcio;
    printf("Qual funcionario você deseja alterar o salario: ");
    scanf("%d", &funcio);

    altera_salario(&funcionario[funcio - 1]);

    imprime(funcionario, num_funcionarios);

    maior_menor_salario(funcionario, num_funcionarios);

    free(funcionario);

    return 0;
}