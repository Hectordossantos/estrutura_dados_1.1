#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *p;
    int mat;
    float n1,  n2, media;
    char nome[50];
    p = fopen("Aluno.txt", "w");
    while (mat != 0)
    {
        printf("digite a matricula");
        scanf("%d", &mat)
        printf("digite o nome \n");
        scanf(" %[^\n]s", nome);
    }
    
   
    
}