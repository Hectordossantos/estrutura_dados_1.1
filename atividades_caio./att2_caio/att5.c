/*mesmo que a anterior, mudando apenas que é usado aritmética de ponteiros*/

#include <stdio.h>
#include <stdlib.h>

void lerdados(int *point, int tam){

printf("digite os valores no vetor\n");
   int i;
    for (i = 0; i < tam; i++)
    {
        scanf("%d", &*(point + i));
    }

    for (int i = 0; i < tam; i++)
    {
        printf("os valores digitados foram %d \n", *(point + i));
    }


}

void dobravalor(int *point ,int tam){
  int i;
    for (i = 0; i < tam; i++)
    {
        point[i] = point[i] * 2;
    printf("o dobro do %i valor é: %d\n", i+1, point[i]);
    }
} 

int main(void){
int tam = 5;
int values[tam];
int *point = values;

lerdados(point, tam);
dobravalor(point, tam);

}