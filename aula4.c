// Programa: Recebe dados de N alunos
#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{
    //definido os elementos do aluno
    char nome[50];
    int matricula;
    float IRA;

}Aluno;

void imprime(Aluno * aluno, int qnt_alunos){
    
    for (int j = 0; j < qnt_alunos; j++)
    {
        printf("\n");
        printf("Aluno [%d] \n", j+1);
        printf("nome: %s \n", vetor_aluno[j].nome);
        printf("Matricula: %d \n", vetor_aluno[j].matricula);
        printf("IRA: %.1f \n", vetor_aluno[j].IRA);
        printf("\n");
        printf("========================================================");
        printf("\n");
    }
    
}

int main(){

    int qnt_alunos,i;

    printf("Quantos alunos deseja cadastrar: ");
    scanf("%d", &qnt_alunos);

    Aluno * vetor_aluno = (Aluno*) malloc(qnt_alunos * sizeof(Aluno));
    if(vetor_aluno == NULL){
        printf("Memória insuficiente!");
        exit(1);
    }

    for (i = 0; i < qnt_alunos; i++)
    {
        printf("\n");
        printf("Digite o nome do aluno %d: ", i+1);
        scanf(" %[^\n]", vetor_aluno[i].nome);
        printf("Digite a matricula do aluno %d: ", i+1);
        scanf("%d", &vetor_aluno[i].matricula);
        printf("Digite o IRA do aluno %d: ", i+1);
        scanf("%f", &vetor_aluno[i].IRA);

        printf("\n");
        printf("========================================================");
        printf("\n");
    }
    imprime(vetor_aluno, qnt_alunos);

    free(vetor_aluno);

    return 0;
}