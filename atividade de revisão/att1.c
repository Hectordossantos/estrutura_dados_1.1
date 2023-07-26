/*array de 5 endereços, imprimindo o dobro com aritmética de ponteiros*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int vet[5];
    int *p = vet;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", p);
             p++;  

    }
    //asdasdasdasdasd
    p = vet;
    //reinicializa o ponteiro
    for (int i = 0; i < 5; i++)
    {
       if (*p % 2 == 0)
       {
            printf("pares: %d  \n",*p);
       }
            p++ ;                            
    }
    
    
}