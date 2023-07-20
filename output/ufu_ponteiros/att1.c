/* Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de ´
cada variavel usando os ponteiros. Imprima os valores das vari ´ aveis antes e ap ´ os a ´
modificac¸ao.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a1 =7;
    float a2 =8.8;
    char a3 = 'l';
    int *p1;
    float *p2;
    char *p3;
    p1 = &a1;
    p2= &a2;
    p3 = &a3;

    printf("o inteiro %d o float %f, o char %c", *p1, *p2, *p3 );
}