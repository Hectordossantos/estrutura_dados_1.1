/* 5) Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for
inválido, o usuário deverá digitar outro até que ele seja válido (ou seja, positivo).
Em seguida, leia um vetor V contendo N posições de inteiros, em que cada valor
deverá ser maior ou igual a 2. Esse vetor deverá ser alocado dinamicamente.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int valor =-1;
    int n;
  while (valor <= -1)
  {
    printf("digite a quantidadede elementos do vetor\n");
    scanf("%d", &n);
       if (n >=0)
       {
        printf("o valor digitado é positivo\n");
        valor ++;
       }
          
  }
  
  int *vetor;
  vetor = (int*) malloc(n * sizeof(int*));
  if (vetor == NULL)
  {
    printf("erro na alocação de memória");
    exit(1);
  }
    printf("digite os valores do vetor \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);

    }
     printf("os valores digitados foram\n");
    for(int i = 0; i < n; i++)
    {
        printf(" %d \t", vetor[i]); printf("os valores digitados foram
    }
    
}