/*4. Fac¸a um programa que leia 2 valores inteiros e chame uma func¸ao que receba estas ˜
2 variaveis e troque o seu conte ´ udo, ou seja, esta func¸ ´ ao˜ e chamada passando duas ´
variaveis A e B por exemplo e, ap ´ os a execuc¸ ´ ao da func¸ ˜ ao, A conter ˜ a o valor de B e B ´
tera o valor de A.*/
#include <stdio.h>
#include <stdlib.h>

void function(int *p1, int *p2){

int aux;

aux = *p1;
*p1 = *p2;
*p2 = aux;

printf("valores %d \t %d ", *p1, *p2);
}

int main(void){

    int *p1, *p2;
    int a1= 10, a2 =20;

    p1 =&a1;
    p2 =&a2;

    function(p1, p2);
}