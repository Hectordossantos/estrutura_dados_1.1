/*Faça um programa para armazenar um vetor de dados contendo n valores do tipo int,
usando a função de alocação dinâmica de memória MALLOC:
a) Atribua para cada elemento do vetor o valor do seu índice.
b) Exibir na tela os 2 primeiros e os 2 últimos elementos do vetor.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

int array[10];
int *point;
point = &array;

point = (int *) calloc(10, sizeof(int));

 printf("valores: \n");
    for (int i = 0; i < 10; i++)
    {
       
        point[i] = i + 1;

    }

    printf("o 1 valor é: %d \n", point[0]);
    printf("o 2 valor é: %d \n", point[1]);
    printf("o penultimo valor é: %d \n", point[8]);
    printf("o o ultimo valor é: %d \n", point[9]);

free(point);


}