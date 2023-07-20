/*Crie uma função que receba por parâmetro um vetor de números inteiros e os
endereços de duas variáveis inteiras (min e max). Ao passar essas variáveis para a
função seu programa deverá analisar qual é o maior e o menor elemento do vetor e
depositar esses elementos nas variáveis do parâmetro.*/

#include <stdio.h>
#include <stdlib.h>

void maiormenor(int a[], int *max, int *min){
 
    int menor = 90000;
    int  maior = 0;

        for(int i = 0; i < 3 ; i++)
        {

        if (a[i]> maior)
        {
            maior = a[i];
        }

        if (a[i] < menor)
        {
            menor = a[i];
        }
        
        
        }
        max = &maior;
        max = &menor;
    printf("o maior e o menor valor são respctivamente: %d \t %d ", maior, menor);

}

int main(void){
int i, tam = 3;
int a[tam];
int max = 0, min = 0;
int *p = a;

        printf("os valores");
        for (i = 0; i < tam; i++)
        {
        scanf("%d", &a[i]);
            
        }

maiormenor(a, &max, &min);

}