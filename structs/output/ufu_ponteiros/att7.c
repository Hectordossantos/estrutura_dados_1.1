/* 7. Crie um programa que contenha uma func¸ao que permita passar por par ˜ ametro dois ˆ
numeros inteiros A e B. A func¸ ´ ao dever ˜ a calcular a soma entre estes dois n ´ umeros e ´
armazenar o resultado na variavel A. Esta func¸ ´ ao n ˜ ao dever ˜ a possuir retorno, mas dever ´ a´
modificar o valor do primeiro parametro. Imprima os valores de A e B na func¸ ˜ ao principal.*/

#include <stdio.h>
#include <stdlib.h>


void datacollect(int *p1, int *p2){
  printf("digite o primeiro valor e segundo valor");
    scanf("%d%d", &*p1, &*p2);
}

void function(int *p1, int *p2){

    *p1 = *p1 + *p2;



printf("valores %d \t %d ", *p1, *p2);
}

int main(void){
 
    int *p1, *p2;
    int a1, a2;

    p1 =&a1;
    p2 =&a2;

  
    datacollect(p1, p2);
    function(p1, p2);
}