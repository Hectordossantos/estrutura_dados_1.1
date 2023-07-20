/*lendo uma matriz 2x3 e encontrando o menor elemento*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int *pointer;
int i, j;
int mat[3][2];
pointer = mat[0];

    printf("digite os elementos da matriz\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            scanf("%d", &mat[i][j]);
        }
        
    }

    for ( i = 0; i < 6; i++)
    {
        printf("%d \n", *pointer);
        
    }

}