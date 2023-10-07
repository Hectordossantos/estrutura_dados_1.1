#include <stdio.h>
#include <stdlib.h>

int main(void){

    char conteudo[500];

    printf("digite o que vc deseja colocar no arquivo 1 \n");
    scanf(" %[^\n]s", conteudo);


    FILE *entrada, *saida;

    entrada = fopen("arquivoq3.txt", "w");
   

    fprintf(entrada, "%s", conteudo);

fclose(entrada);

  char leitura[500];

    entrada = fopen("arquivoq3.txt", "r");

    saida = fopen("saidaq3.txt", "w");


    while (fscanf(entrada, "%s ", &leitura) != EOF)
    {

    for (int i = 0; leitura[i] != '\0'; i++) {
        if (leitura[i] == 'a') {
            leitura[i] = '*';
        }
    }
        fprintf(saida, "%s", leitura);
    }


}