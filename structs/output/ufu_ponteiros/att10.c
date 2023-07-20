/*10. Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada ´
valor lido.*/

#include <stdio.h>
#include <stdlib.h>
void function(float *array, int qa){
int i;
    printf("digite os valores dos arrays \n");
    for ( i = 0; i < qa; i++)
    {
        scanf("%f", &array[i]);
    array[i]= array[i] * 2;
        printf("%d value: %2.f \n", i+1, array[i]);
    }
    
}

int main (void){

  float *array;
  int qa;

  printf("digite o tamanho do array");
  scanf("%d", &qa);

  array = (float*) malloc(qa * sizeof(float));
  


        function(array, qa);

    free(array);
}