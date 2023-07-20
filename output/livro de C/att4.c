/*
Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
imprima.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

int *pointer;
int n, i;
printf("digite a quantidade de elementos que deseja inserir no vetor");
scanf("%d", &n);

pointer = (int*) malloc(n * sizeof(int));
if (pointer == NULL)
{
    printf("alocação com erro");
    exit(1);
}

    for (i = 0; i < n; i++){
        scanf("%d", &pointer[i]);
        printf("os valores digitador foram %d \n", pointer[i]);
    }

    free(pointer);
}

