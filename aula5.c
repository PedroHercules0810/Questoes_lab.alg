#include <stdio.h>
#include <stdlib.h>

typedef union indice
{
    float IG;
    float IRA;
    float IRT;
}Indice;

typedef struct 
{
    char nome[50];
    int mat;
    char curso[50];
    Indice indice;
}Aluno;


typedef enum bool{
    false,
    true
}Bool;


int main()
{
    Aluno aluno;
    int opcao;

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]s", aluno.nome);
    printf("Digite a matricula do aluno: ");
    scanf("%d", &aluno.mat);
    printf("Digite o curso do aluno: ");
    scanf(" %[^\n]s", aluno.curso);
    printf("Qual Indice você deseja inserir: \n 1-IG \n 2-IRA \n 3-IRT \n");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        printf("Digite o IG do aluno: ");
        scanf("%f", &aluno.indice.IG);
    }else if(opcao == 2)
    {
        printf("Digite o IRA do aluno: ");
        scanf("%f", &aluno.indice.IRA);
    }else if(opcao == 3)
    {
        printf("Digite o IRT do aluno: ");
        scanf("%f", &aluno.indice.IRT);
    }else
    {
        printf("ERRO!");
    }
    
    printf("INFORMAÇÕES DO ALUNO: \nNOME: %s\nMATRICULA: %d\nCURSO: %s\nINDICE: %f",aluno.nome,aluno.mat,aluno.curso,aluno.indice.IG);

    return 0;
}