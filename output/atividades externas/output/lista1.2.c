#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
 FILE *arq;
char titulo[100];
char nomes [300];

arq= fopen("arquivotxt.txt","w");

printf("digite o titulo");
scanf(" %[^\n]s", titulo);
printf("digite o nome");
scanf(" %[^\n]s", nomes);

fprintf(arq, "titulo:%s \n nome: %s", titulo, nomes);


}