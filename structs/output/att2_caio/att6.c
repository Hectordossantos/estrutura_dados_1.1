/*Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse
array do teclado e imprima o endereço das posições contendo valores pares.*/

#include <stdio.h>
#include <stdlib.h>

void lerdados(int *point, int tam){

printf("digite os valores no vetor\n");
    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &*(point + i));
    }

    for (int i = 0; i < tam; i++)
    {
        printf("os valores digitados foram %d \n", *(point + i));
    }


}

void valorespares(int *point ,int tam){
  int i;
  printf("os valores pares encontrados nesse vetor foram:\n");
    for (i = 0; i < tam; i++)
    {
        if (point[i] % 2 == 0)
        {
            printf("o %d\n", point[i]);
            
        }
        
    }
} 

int main(void){
int tam = 5;
int values[tam];
int *point = values;

lerdados(point, tam);
valorespares(point, tam);

}