#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char conteudo[500];
    char conteudo2[500];
    printf("digite o que vc deseja colocar no arquivo 1\n");
    scanf(" %[^\n]s", conteudo);

    printf("digite o que vc deseja colocar no arquivo 2\n");
    scanf(" %[^\n]s", conteudo2);

    FILE *entrada1, *entrada2, *saida1, *saida2;

    entrada1 = fopen("arquivo1.txt", "w");
    entrada2 = fopen("arquivo2.txt", "w");

    fprintf(entrada1, "%s", conteudo);
    fprintf(entrada2, "%s", conteudo2);


    fclose(entrada1);
    fclose(entrada2);

    char leitura[500]; 

    entrada1 = fopen("arquivo1.txt", "r");
    entrada2 = fopen("arquivo2.txt", "r");

    saida1 = fopen("arquivo1_invertido.txt", "w");
    saida2 = fopen("arquivo2_invertido.txt", "w");

    while (fscanf(entrada1, "%s", leitura) != EOF)
    {
        fprintf(saida2, "%s", leitura);
    }

   while (fscanf(entrada2, "%s", leitura) != EOF)
    {
        fprintf(saida1, "%s", leitura);
    }

    fclose(entrada1);
    fclose(entrada2);
    fclose(saida1);
    fclose(saida2);

}
