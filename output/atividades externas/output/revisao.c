#include <stdio.h>

int main(void){
    FILE *arquivo, *arquivo2;

arquivo= fopen("a.txt", "r");
arquivo2= fopen("testeletra.txt", "w");
char letra;
while (fscanf(arquivo, "%c", &letra)!= EOF)
{
    if (letra == 'a')
    {
        letra = '*';
    }
    fprintf(arquivo2,"%c", letra);
}

}