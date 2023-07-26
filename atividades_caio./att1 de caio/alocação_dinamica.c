#include <stdio.h>
#include <stdlib.h>

int main(){

    int **mat;
    int linhas= 3, colunas =4;
    int i, j;
    mat =(int **) malloc(linhas * sizeof(int*));

    for ( i = 0; i < colunas; i++)
    {
        mat[i]= (int**) malloc(colunas * sizeof(int*));
    }
    
    for ( i = 0; i < linhas; i++)
    {
      for ( j= 0; j < colunas; j++)
      {
        scanf("%d", &mat[i][j]);
      }
      
    }

      

    
    printf("elementos \n");
    for ( i = 0; i < linhas; i++)
    {
      for ( j = 0; j < colunas; j++)
      {
        printf("%d \n", mat[i][j]);
      }
      

    }
    
}