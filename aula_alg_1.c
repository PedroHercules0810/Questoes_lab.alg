#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    char * nome_completo = (char*) malloc(100*sizeof(char));
    if (nome_completo == NULL)
    {
        /* code */
        printf("Erro!");
        exit(1);
    }
    printf("Digite o Nome completo: ");
    scanf("%[^\n]", nome_completo);
    nome_completo = (char*) realloc(nome_completo,(strlen(nome_completo)+1)*sizeof(char));
    printf("Nome digitado: %s \n Tamanho do nome: %d", nome_completo, strlen(nome_completo));

    free(nome_completo);
    return 0;
}