/*4. Faça um programa que requisite o ano atual ao usuário, abra um arquivo de texto,
que contém um conjunto de registros formados por nomes e datas de nascimento,
por exemplo:
E seja capaz de imprimir na tela o nome e a idade que essa pessoa terá ou tem nesse
ano. todas as impressões devem ser feitas no final do programa, ou seja, as informações
de nome e idade devem ser armazenadas.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

   char nome[60];
    int dian, mesn, anon;
    int idade;

    FILE *arq;

    arq= fopen("lista14.txt", "r");
   

   while(fscanf(arq,"%s %d %d %d",nome, &dian, &mesn, &anon) != EOF)
   {
      idade = 2023 -anon;
      printf("%s tem ou tera: %d anos: \n", nome, idade);
   }
    fclose(arq);


   
}