/*9. Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o enderec¸o de cada posic¸ao dessa matriz.

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int **mat;
    int i,j;
    mat = (int**) malloc(3 * sizeof(int*));

    for ( i = 0; i < 3; i++)
    {
        mat[i] = (int*) malloc(3 * sizeof(int)); 
    }
    
            printf("digite os valores das matrizes \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        
        }
        
    }
    
            printf("os valores das matrizes \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("valores %d \n", mat[i][j]);
        }
        
    }
    
    for ( i = 0; i < 3; i++)
    {
        free(mat[i]);

    }
    free(mat);
}
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int **mat;
    int i,j;
    int linhas, colunas;

    printf("digite a quantidade de linhas e colunas que vc deseja");
    scanf("%d%d", &linhas, &colunas);


    mat = (int**) malloc(linhas * sizeof(int*));

    for ( i = 0; i < colunas; i++)
    {
        mat[i] = (int*) malloc(colunas * sizeof(int)); 
    }
    
            printf("digite os valores das matrizes \n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf("%d", &mat[i][j]);
        
        }
        
    }
    
            printf("os valores das matrizes \n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("valores %d \n", mat[i][j]);
        }
        
    }
    
    for ( i = 0; i < colunas; i++)
    {
        free(mat[i]);

    }
    free(mat);
}
