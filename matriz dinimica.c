#include <stdio.h>
#include <stdlib.h>

int ** criaMatrizInt(int linhas, int colunas){

    int ** matriz = (float**) malloc(linhas*sizeof(int*));
    int linha;

    for (linha = 0; linha < linhas; linha++)
    {
        matriz[linha] = (int*) malloc(colunas*sizeof(int));
    }

    return matriz;

}

int main(void){
    int linhas = 3, colunas = 3;
    int ** matriz = criaMatrizInt(linhas, colunas);

    int i, j;
    
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
             matriz[i][j] = i*3 + j;
        }
    }
    
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            if (j == 0)
            {
                printf("%d\n\t", matriz[i][j]);
            }
            else{
                printf("%d\t", matriz[i][j]);
            }
        }
        
    }
    

    int linha;
    for (linha = 0; linha < linhas; linha++)
    {
        free(matriz[linha]);
    }
    free(matriz);


    return 0;
}