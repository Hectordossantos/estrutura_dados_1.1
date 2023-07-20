/*Fac¸a um programa que leia do usuario o tamanho de um vetor a ser lido e fac¸a a alocac¸ ´ ao˜
dinamica de mem ˆ oria. Em seguida, leia do usu ´ ario seus valores e mostre quantos dos ´
numeros s ´ ao pares e quantos s ˜ ao˜ ´ımpares. */

#include <stdlib.h>
#include <stdio.h>

int main(void){

int *array;
int qe;
printf("digite o tamanho do array \n");
scanf("%d", &qe);

array = (int *) malloc(qe * sizeof(int));

    printf("digite os valores \n");
    for (int i = 0; i < qe; i++)
    {
        scanf("%d", &array[i]);

        
    }

            int contp;
            int contimp;

    for (int i = 0; i < qe; i++)
    {
     
            if (array[i] % 2  == 0)
            {
                contp ++;
            }

            if (array[i] % 2  != 0)
            {
                contimp ++;
            }
   
    }
                printf("a quantidade de valores pares são %d \n", contp);
                printf("a quantidade de valores impares são %d \n", contimp);

    free(array);
}
