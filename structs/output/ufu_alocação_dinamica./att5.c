/*5. Fac¸a um programa que leia um numero N e: ´
• Crie dinamicamente e leia um vetor de inteiro de N posic¸oes; ˜
• Leia um numero inteiro X e conte e mostre os m ´ ultiplos desse n ´ umero que existem ´
no vetor*/



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

            int aux;
            
    for (int i = 0; i < qe; i++)
    {
     
            if (*array[i] % *array[i+1] == 0)
            {
                printf("o elemento %d é divisel com %d \n",array[i+1] , array[i]);
            }
            if (*array[i] % *array[i+2] == 0)
            {
                printf("o elemento %d é divisel com %d \n",array[i+2] , array[i]);
            }
            if (*array[i] % *array[i+3] == 0)
            {
                printf("o elemento %d é divisel com %d \n",*array[i+3] , *array[i]);
            }
            if (*array[i] % *array[i+4] == 0)
            {
                printf("o elemento %d é divisel com %d \n",array[i+4] , array[i]);
            }
                aux = array[i];
                array[i]= array[i+1];
                array[i+1] = aux;
        
    }
               

    free(array);
}
