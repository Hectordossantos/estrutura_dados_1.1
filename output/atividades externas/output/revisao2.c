#include <stdio.h>
#include <stdlib.h>
typedef struct cidades
{
   char  ome[50];
    int habitantes;
}Cidades;


int main(void){
    int tam = 3;
    Cidades cidades[tam];
    FILE *arquivo, *arquivo2;
    arquivo = fopen("a.txt", "r");

    for (int i = 0; i < tam; i++)
    {
        fscanf(arquivo, "%s %d", cidades[i].ome, &cidades[i].habitantes);
    }
    Cidades aux;
    for (int i = 0; i < tam; i++)
    {
        for (int j = i +1; j < tam; j++)
        {
            if (cidades[i].habitantes < cidades[j].habitantes)
            {
                aux = cidades[i];
                cidades[i] = cidades[j];
                cidades[j] = aux;
            }
            
        }
        
    }

     arquivo2 = fopen("cidadesrev.txt", "w");
    for (int i = 0; i < tam; i++)
    {
              fprintf(arquivo2,"%s %d \n", cidades[i].ome, cidades[i].habitantes);          

    }
    fclose(arquivo2);

     
}