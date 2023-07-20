/*Faça um programa que leia três valores inteiros e chame uma função que receba estes
3 valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira
variável, o segundo menor valor na variável do meio, e o maior valor na última
variável. A função deve avisar caso os valores sejam iguais. Exibir os valores
ordenados na tela.*/

#include <stdio.h>
#include<stdlib.h>

void funcao(int *array, int tam){
   int i, j;

   for ( i = 0; i < tam; i++)
   {
     int aux;

        for ( j = i+1; j < tam; j++)
        {
            if (array[i] > array[j])
            {
                aux= array[i];
                array[i] = array[j];
                array[j] = aux;
                
            }
            
        }
        
   }

   for ( i = 0; i < tam; i++)
   {
    printf("os valores em ordem são %d \n", array[i]);
   }
   

    if (array[0] == array[1])
    {
        printf("o primeiro e o segundo valor são iguais\n");
    }

    if (array[0] == array[2])
    {
        printf("o primeiro e o terceio valor são iguais\n");
    }

    if (array[1] == array[2])
    {
        printf("o segundo e o terceiro valor são iguais\n");
    }
   
   
    
}

int main(void){
    int tam = 3;
    int array[tam];
    

printf("dgite os elementos que deseja \n");
for (int i = 0; i < tam; i++)
{
    scanf("%d",&array[i]);
}

funcao(&array, tam);

}