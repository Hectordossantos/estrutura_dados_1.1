/*1. Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o endereço de cada posição dessa matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
 float** mat;
    float colunas =3, linhas = 3;
int i,j;
    mat= (float**) malloc(colunas * sizeof(float*));
    for ( i = 0; i < linhas; i++)
    {
        mat[i]= (float*) malloc(linhas * sizeof(float));
    }
    
    printf("digite os elementos da matriz\n");

for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
        scanf("%f", &mat[i][j]);
    }
    
}
printf("endereços \n");
for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
        printf("%p \n", &mat[i][j]);
    }
    
}

}