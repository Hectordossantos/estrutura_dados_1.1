#include <stdio.h>
#include <stdlib.h>
int main (void){

FILE *arquivo;
char letra;
arquivo = fopen("novo_arquivo.txt","w+");
if (arquivo)
{
    printf("digite aqui o uque deseja");
    scanf("%c", &letra);
    while (letra != '\n')
    { fputc (letra, arquivo);
    scanf("%c", &letra);
     
    }
    rewind(arquivo);
    while (!feof(arquivo))
    {
        letra = fgetc(arquivo);
        printf("%c", letra);
    }
    fclose(arquivo);
    
}

}