/*Faça um programa que modifique as vogais de uma frase. O programa deve ler uma
frase (max. 100 caracteres) e armazená-la num vetor. Imprima a frase lida trocando
as vogais, isto é, trocar 'a' pelo ‘e', 'e' pelo ‘i', 'i' pelo ‘o', 'o' pelo ‘u' e o 'u' pelo ‘a'.
Usar uma função void para realizar a troca e uma função para realizar a impressão da
frase trocada. A função deve ter como parâmetro um ponteiro char referente ao vetor. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lerdados(char *point){

printf("digite a frase\n");
   scanf(" %[^\n]s", point);

    printf("a frase digitada %s\n", point);

}

void trocaletras(char *point){
    int tam = strlen(point);

for (int i = 0; i < tam; i++)
{
    if (point[i] == 'a')
    {
        point[i] = 'e';
    }

    else if (point[i] == 'e')
    {
        point[i]= 'i';
    }

    else if (point[i] == 'i')
    {
        point[i]= 'o';
    }

    else if (point[i] == 'o')
    {
        point[i]= 'u';
    }
    else if (point[i] == 'u')
    {
        point[i]= 'a';
    }
    
}

    printf("frase reformulada : %s\n", point);
}

int main(void){
int stringg[100];
char *point = &stringg;

lerdados(point);
trocaletras(point);

}