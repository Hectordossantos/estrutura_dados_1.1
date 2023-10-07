#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cidade
{
    char nome[50];
    int habitantes;
} Cidade;

int main(void)
{
    Cidade cidades[4];
    FILE *entrada, *saida;

    entrada = fopen("cidades.txt", "r");

    for (int i = 0; i < 4; i++)
    {
        fscanf(entrada,"%s %d", cidades[i].nome, &cidades[i].habitantes);
    }
    
    fclose(entrada);

    for (int i = 0;  i < 4; i++)
    {
        for (int j= i + 1; j < 4; j++)
        {
         Cidade aux;
            if (cidades[i].habitantes < cidades[j].habitantes)
            {
                aux = cidades[i];
                cidades[i] = cidades[j];
                cidades[j] = aux;
            }
        }
    }
  
    for (int i = 0; i < 4; i++)
    {
        printf("cidade %s, habitantes %d \n", cidades[i].nome, cidades[i].habitantes);
    }

    saida = fopen("cidades_ordenadas.txt", "w");
  
    for (int i = 0; i < 4; i++)
    {
        fprintf(saida, "cidade: %s, habitantes: %d \n", cidades[i].nome, cidades[i].habitantes);
    }
    
   

    fclose(saida);

    printf("Cidades ordenadas por quantidade de habitantes foram escritas em 'cidades_ordenadas.txt'.\n");

}
