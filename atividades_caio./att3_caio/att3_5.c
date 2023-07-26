/*Crie uma função para somar dois arrays. Esta função deve receber os arrays e
preencher a soma em um terceiro array. Utilize aritmética de ponteiros para
manipulação do array.*/

#include <stdio.h>
#include<stdlib.h>

void funcao(int *array, int *array2, int tam){
   int i, j;

   int array3[tam];

   for ( i = 0; i < tam; i++)
   {
    array3[i] = array[i] + array2[i];
        
   }
   for ( i = 0; i < tam; i++)
   {
    printf("os valores somados da posição %d é : %d \n", i+1, array3[i]);
   }
    
}

int main(void){
    int tam = 3;
    int array[tam];
    int array2[tam];

printf("dgite os elementos que deseja \n");
for (int i = 0; i < tam; i++)
{
    scanf("%d",&array[i]); 
}

    printf("segundo array \n");
for (int i = 0; i < tam; i++)
{
    scanf("%d",&array2[i]);
}

funcao(&array,array2, tam);

}