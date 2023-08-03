/*1. Escreva um programa que:
(a) Crie/abra um arquivo texto de nome “arq.txt”
(b) Permita que o usuario grave diversos caracteres nesse arquivo, at ´ e que o usu ´ ario ´
entre com o caractere ‘0’
(c) Feche o arquivo*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *arquivo;
    char letra;

    arquivo = fopen("arq.txt","w+");
    if (arquivo)
    {
            printf("digite aqui o que vc deseja colocar no arquivo \n");
            scanf("%c", &letra);
            int linhas = 1;
            while (letra != '0')
            {
            if (letra == '\n')
            {
                linhas ++;
            }

            fputc(letra, arquivo);
            scanf("%c", &letra);

            }
            printf("\n o arquivo tem %d linhas\n", linhas);
    
            rewind(arquivo);
            printf("o conteudo do arquivo é: \n");
            while (!feof(arquivo))     
            {
               letra= fgetc(arquivo);
               printf("%c",letra);
            }
            fclose(arquivo);
         //   printf("o arquivo tem %d linhas\n", linhas);
    }
            
    else{
        printf("erro ao abrir arquivo");
    }
    
}