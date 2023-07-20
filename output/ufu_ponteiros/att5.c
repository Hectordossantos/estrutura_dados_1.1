/*5. Fac¸a um programa que leia dois valores inteiros e chame uma func¸ao que receba estes ˜
2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na ´
segunda variavel. Escreva o conte ´ udo das 2 vari ´ aveis na tela. */

#include <stdio.h>
#include <stdlib.h>

void function(int *p1, int *p2){
int aux;
if (*p2 > *p1)
{
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}


printf("valores %d \t %d ", *p1, *p2);
}

int main(void){
 
    int *p1, *p2;
    int a1, a2;

    p1 =&a1;
    p2 =&a2;

    printf("digite o primeiro valor e segundo valor");
    scanf("%d%d", &a1, &a2);

    function(p1, p2);
}