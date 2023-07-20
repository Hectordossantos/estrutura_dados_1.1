/*. Escreva uma função que aceita como parâmetro um array de inteiros, e determina o
maior elemento do array e o número de vezes que este elemento ocorreu no array. Por
exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a
função deve retorna para o programa que a chamou o valor 15 e o número 3 (indicando
que o número 15 ocorreu 3 vezes). A função deve ser do tipo void.*/

#include <stdio.h>
#include<stdlib.h>

void funcao(int *array, int tam){
   int i;
    int maior = 0;

    for ( i = 0; i < tam; i++)
    {
        if (array[i] > maior)
        {
            maior = array[i];
        }

    }
 

     int vezes = 0;
    for ( i = 0; i < tam; i++)
    {
        if (array[i] == maior)
        {
            vezes ++;
        }

    }
   printf("o maior valor que está no vetor é %d e ele repete %d vezes", maior, vezes);
    
}

int main(void){
    int tam = 9;
    int array[tam];

printf("dgite os elementos que deseja \n");
for (int i = 0; i < tam; i++)
{
    scanf("%d",&array[i]);
}

funcao(&array, tam);

}