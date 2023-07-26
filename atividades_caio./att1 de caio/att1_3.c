/*Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço
e telefone de 5 pessoas e os imprima em ordem alfabética.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pessoas
{
    char nome[80];
    char endereco[200];
    int telefone;
}Pessoas[5];

int main(void){
Pessoas pessoa;
 int tam = 5;
 int i,j;
    for (i = 0; i < tam; i++)
    {
        printf("digite o nome da pessoa que deseja cadastrar \n");
        scanf(" %[^\n]s", pessoa[i].nome);
    fflush(stdin);
        printf("digite o endereço da pessoa que deseja cadastrar \n");
        scanf(" %[^\n]s", pessoa[i].endereco);
    fflush(stdin);
        printf("digite o telefone da pessoa que deseja cadastrar \n");
        scanf("%d", &pessoa[i].telefone);
        
    }
   // char aux[80];

    int compara;
    for ( i = 0; i < tam; i++)
    {
       for ( j = i+1; j < tam; j++)
       {
         Pessoas aux;
           compara = strcmp(pessoa[i].nome, pessoa[j].nome);
            if (compara > 0)
           {
                aux[i] = pessoa[i];
                pessoa[i] = pessoa[j];
                pessoa[j] = aux[i];
        
           }
           
       }
        
    }
    
    for (i = 0; i < tam; i++)
    {
        printf("o nome da %d ° pessoa %s \n",i+1, pessoa[i].nome);

        printf("o endereço da %d ° pessoa é %s \n",i+1, pessoa[i].endereco);

        printf("o telefone da pessoa %d ° é %d \n", i+1, pessoa[i].telefone);

    }
/*for ( i = 0; i < tam; i++)
{

}

    if (pessoa[i].nome > pessoa[i+1].nome)
    {
        strcpy(pessoa[i].nome, pessoa[i+1].nome);
    }
    
    printf("os nomes em ordem são %s \n", pessoa[i].nome);

    */
    
}





