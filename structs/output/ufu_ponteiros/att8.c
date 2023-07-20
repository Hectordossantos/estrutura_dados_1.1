/*8. Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
enderec¸o de cada posic¸ao desse array. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    float vet[10];
    float *p;
    p = vet;

        printf("digite os valores \n");
     for (int i = 0; i < 10; i++)
    {
        scanf("%f", &vet[i]);
    }
    

    printf("os endereços de vet são \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%f \n", *(p + i));
    }
    
}