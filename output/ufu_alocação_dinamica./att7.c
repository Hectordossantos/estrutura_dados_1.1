/* Escreva um programa que leia primeiro os 6 numeros gerados pela loteria e depois os 6 ´
numeros do seu bilhete. O programa ent ´ ao compara quantos n ˜ umeros o jogador acertou. ´
Em seguida, ele aloca espac¸o para um vetor de tamanho igual a quantidade de numeros ´
corretos e guarda os numeros corretos nesse vetor. Finalmente, o programa exibe os ´
numeros sorteados e os seus n ´ umeros corretos. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main (void){
    
srand(time(NULL));
    int num_apostados[6];
    int numeroAleatorio[6];
    int i, j , aux, tam = 6;
    int *pale = &numeroAleatorio;
    int *pnum = &num_apostados;

    printf("ordem dos vetores: \t");
    for ( i = 0; i < 6; i++)
    {
        numeroAleatorio[i] = (rand()%100 + 1);
       
                
        
    printf("%d\t", numeroAleatorio[i]);
    }
    printf("\n");

    printf("nova ordem crescente: \t");
    for ( i = 0; i < 6; i++)
    {
        for (j = i+1; j < 6; j++)
        {
                if (numeroAleatorio[i] > numeroAleatorio[j])
                {
                    aux = numeroAleatorio[i];
                    numeroAleatorio[i]  = numeroAleatorio[j];
                     numeroAleatorio[j] = aux;
                }

        }
        
              printf("%d\t", numeroAleatorio[i]);
    }
              printf("\n");
    

    for ( i = 0; i < 6; i++)
    {
    printf("digite seis números que vc apostou aqui");
    scanf("%d", &num_apostados[i]);
        
        
    }
 int aux2;
 int acertos;
    printf("numeros apostados em ordem: \t");
    for ( i = 0; i < 6; i++)
    {
        for ( j= i+1; j < 6; j++)
        {
           
            if (num_apostados[i] > num_apostados[j])     
            {
                aux2 = num_apostados[i];
                num_apostados[i] = num_apostados[j];
                num_apostados[j] = aux2;
            }

        }
        
              printf("%d\t", num_apostados[i]);
        
    }

    for ( i = 0; i < 6; i++)
    {
        if (num_apostados[i] == numeroAleatorio[i])
        {
            acertos ++;
        }
        
    }
    

    printf("\nos numeros que vc acertou foram %d \n", acertos);
    
}

