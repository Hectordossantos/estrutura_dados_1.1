/*Faça um programa que receba o nome de um arquivo de entrada e outro de saída. O
arquivo de entrada contem o nome de uma cidade (ocupando 40 caracteres) e o seu
número de habitantes. O programa deverá ler o arquivo de entrada e gerar um arquivo
de saída onde aparece o nome da cidade mais populosa seguida pelo seu número de
habitantes*/

#include <stdio.h>
#include <stdlib.h>


typedef struct cidaedes
{
    char cidade[50];
    int habitantes;
}Cidades;


int main(void){
printf("abriu");

Cidades cidades[4];
FILE *marq;


marq = fopen("cidades.txt", "r");
int i = 0;
while (fscanf(marq, "%s %d", cidades[i].cidade, &cidades[i].habitantes)!= EOF)
{
    printf("as cidades são %s e seus habitantes %d \n", cidades[i].cidade, cidades[i].habitantes);
i++;
}

Cidades aux;
    for (int i = 0; i < 4; i++)
    { 
        for (int j = i+1; j < 4; j++)
        {
            if (cidades[i].habitantes < cidades[j].habitantes)
            {
                aux = cidades[i];
                cidades[i]= cidades[j];
                cidades[j] = aux;

            }
            
        }
        
      
    }
i = 0;
    while (fprintf(marq, "%s %d", cidades[i].cidade, cidades[i].habitantes) != EOF)
    {
       printf("%s %d", cidades[i].cidade, cidades[i].habitantes);
       i++;
    }
    
    
fclose(marq);

}