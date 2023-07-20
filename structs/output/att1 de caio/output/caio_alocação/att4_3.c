/* 3. Crie uma função que receba como parâmetros dois vetores de inteiros, v1 e v2, e as
suas respectivas quantidades de elementos, n1 e n2. A função deverá retornar um
ponteiro para um terceiro vetor, v3, com capacidade para (n1 + n2) elementos, alocado
dinamicamente, contendo a união de v1 e v2.
Por exemplo, se v1 = {11, 13, 45, 7} e v2 = {24, 4, 16, 81, 10, 12}, v3 irá conter
{11, 13, 45, 7, 24, 4, 16, 81, 10, 12}.
O cabeçalho dessa função deverá ser o seguinte:
void uniao(int *v1, int n1, int *v2, int n2);
*/

#include <stdio.h>
#include <stdlib.h>
void uniao(int *v1, int n1, int *v2, int n2, int *v3, int n3){
 n3 = n1+n2;
 v3[n3];
int i;

    for ( i = 0; i < n1; i++)
    {
        v3[i] = v1[i];
    }

    for ( i =0 ; i < n2; i++)
    {
        v3[n1 + i] = v2[i];
    }

    for ( i = 0; i < n3; i++)
    {
        printf("%d \n", v3[i]);
    }

}


int main(void){

    int *v1, *v2, *v3;
    int n1, n2;
    int n3;
    int i;
printf("digite a quantidade de elementos que terá o vetor \n");
scanf("%d", &n1);

printf("digite a quantidade de elementos que terá o vetor \n");
scanf("%d", &n2);

v1 = (int*) malloc(n1 * sizeof(int));
v2 = (int*) malloc(n2 * sizeof(int));
v3 = (int*) malloc((n1 + n2) * sizeof(int));

printf("digite os elementos que terá o  1° vetor \n");
for ( i = 0; i < n1; i++)
{
    scanf("%d", &v1[i]);
}

    printf("digite os elementos que terá o 2° vetor \n");
for ( i = 0; i < n1; i++)
{
    scanf("%d", &v2[i]);
}

uniao(v1,n1, v2, n2, v3,n3);

free(v1);
free(v2);
free(v3);
}