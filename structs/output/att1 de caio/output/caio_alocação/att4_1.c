/*. Faça um programa que leia o tamanho de um vetor de inteiros e reserve
dinamicamente memória para esse vetor. Em seguida, leia os elementos desse vetor,
imprima o vetor lido, e mostre quantos números pares e impares estão presentes no
vetor.*/

#include <stdio.h>
#include<stdlib.h>

int main(void){

int array[10];
int *point;
point = &array;

point = (int *) calloc(10, sizeof(int));

 printf("digite aqui os valores dos ponteiro \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &point[i]);
    }
int par, impar;
 printf("valores: \n");
    for (int i = 0; i < 10; i++)
    {
        if (point[i] % 2 == 0)
        {
            par++;
        }
        else{
            impar ++;
        }
        
        printf("%d\n", point[i]);
    }
    printf("a quantidade de valores pares são %d \n", par);
    printf("a quantidade de valores impares são %d \n", impar);

free(point);


}