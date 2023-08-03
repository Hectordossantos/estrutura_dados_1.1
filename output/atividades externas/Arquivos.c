#include <stdio.h>
#include <stdlib.h>

int main(void){

FILE *p;
char letra;
p = fopen("arquivo.txt","w+");
if (p)
{
    printf("digite aqui o que deseja");
    scanf("%c", &letra);
    while (letra != '\n')
    {
        fputc(letra,p);
        scanf("%c", &letra);
    }
    rewind(p);
printf("texto lido do arquivo\n");
    while(!feof(p)){
        letra = fgetc(p);
        printf("%c", letra);
    }
    fclose(p);
}
else{
    printf("erro ao abrir arquivo");
}

}