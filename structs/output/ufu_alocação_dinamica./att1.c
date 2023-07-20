/*1. Crie um programa que:
(a) Aloque dinamicamente um array de 5 numeros inteiros, ´
(b) Pec¸a para o usuario digitar os 5 n ´ umeros no espac¸o alocado, ´
(c) Mostre na tela os 5 numeros, ´
(d) Libere a memoria alocada. */

#include <stdlib.h>
#include <stdio.h>

int main(void){

int *array;

    array = (int*) malloc(5 * sizeof(int));

    printf("digite os valores \n");
    
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
        printf("%d value: %d \n", i+1, array[i]);

    }

free (array);
}