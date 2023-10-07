#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
 FILE *arq;
char titulo[100];
char nomes [300];

printf("digite o titulo do arquivo e no final adicione a extensão .txt\n");
scanf(" %[^\n]s", titulo);

arq= fopen(titulo,"w");

printf("digite o nome\n");
scanf(" %[^\n]s", nomes);

fprintf(arq, "titulo:%s \n nome: %s", titulo, nomes);


}