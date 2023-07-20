/*Crie um programa que contenha um array de inteiros contendo 10 elementos.
Imprima os endereços de cada posição desse array.*/

#include <stdio.h>
#include <stdlib.h>


int main(void){
int v[2];
int *p = &v;
int i;
    for ( i = 0; i < 10; i++)
    {
    printf("digite os valores");
    scanf("%d",&v[i]);
        
    }
    for ( i = 0; i < 10; i++)
    {
        printf("os endereços são %p \n", (p + i));
    }
    

}