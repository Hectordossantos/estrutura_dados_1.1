/*1. Escreva uma função chamada troca, que troca os valores dos parâmetros recebidos
usando ponteiros.*/

#include <stdio.h>
#include <stdlib.h>

void trocav(int *p, int *p1){

int aux;
aux = *p;
*p = *p1;
*p1 = aux;

    printf("os valores das variaveis trocados é %d \t %d", *p, *p1);
}

int main(void){
int v;
int a, b;

printf("digite dois valores");
scanf("%d%d",&a, &b);
int *p = &a;
int *p1 =&b;

trocav(p, p1);
}