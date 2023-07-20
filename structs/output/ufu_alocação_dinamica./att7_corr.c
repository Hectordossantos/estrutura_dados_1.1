/* Escreva um programa que leia primeiro os 6 numeros gerados pela loteria e depois os 6 ´
numeros do seu bilhete. O programa ent ´ ao compara quantos n ˜ umeros o jogador acertou. ´
Em seguida, ele aloca espac¸o para um vetor de tamanho igual a quantidade de numeros ´
corretos e guarda os numeros corretos nesse vetor. Finalmente, o programa exibe os ´
numeros sorteados e os seus n ´ umeros corretos.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordenaaleatorios( int *pnum, int*pale, int tam){
int i,j, aux;
    printf("ordem dos vetores: \t");
    pale = (int*) malloc (tam * sizeof(int));
    for ( i = 0; i < tam; i++)
    {
        pale[i] = (rand()%100 + 1);
       
                
        
    printf("%d\t", pale[i]);
    }
    printf("\n");
    printf("nova ordem crescente: \t");
pale = (int*) malloc (tam * 36 * sizeof(int));
if (pale == NULL)
{
printf("a segunda alocação de PALE foi mal sucedida.\n");
exit(1);    
}

    for ( i = 0; i < tam; i++)
    {
        for (j = i+1; j < tam; j++)
        {
                if (pale[i] > pale[j])
                {
                    aux = pale[i];
                    pale[i] = pale[j];
                     pale[j] = aux;
                }

        }
        printf("%d\t", pale[i]);
    }
              printf("\n");
}

void ordenaapostados( int*pnum, int*pale, int tam){
int i,j, aux2;
    
    pnum = (int *) malloc(tam * sizeof(int));

 for ( i = 0; i < tam; i++)
    {
    printf("digite seis números que vc apostou aqui");
    scanf("%d", &pnum[i]);
        
    }

    pnum = (int*) malloc(tam * tam * sizeof(int));
    if (pnum == NULL)      
    {
        printf("alocação 2 de PNUM mal sucedida.");
        exit(1);
    }
    
    printf("numeros apostados em ordem: \t");
    for ( i = 0; i < tam; i++)
    {
        for ( j= i+1; j < tam; j++)
        {
           
            if (pnum[i] > pnum[j])     
            {
                aux2 = pnum[i];
                pnum[i] = pnum[j];
                pnum[j] = aux2;
            }

        }
        
              printf("%d\t", pnum[i]);
        
    }
 int acertos;

    for ( i = 0; i < tam; i++)
    {
        if (pnum[i] == pale[i])
        {
            acertos ++;
        }
        
    }
    

    printf("\nos numeros que vc acertou foram %d \n", acertos / 2);
    
}

int main (void){
    
srand(time(NULL));
int tam = 6;
    int num_apostados[tam];
    int numeroAleatorio[tam];
    int i, j , aux;
    int *pale = &numeroAleatorio;
    int *pnum = &num_apostados;

  
    ordenaaleatorios(pnum, pale, tam);
    ordenaapostados(pnum, pale, tam);
}

