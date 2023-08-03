#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

typedef struct alunos
{
    char nome[60];
    float nota1;
    float nota2;
    float media;
        
}Alunos;


int main(void){

Alunos alunos[3];

    FILE *arq;
for (int i = 0; i < 3; i++)
{
    printf("digite o nome do aluno %d aluno \n", i+1);
    scanf(" %[^\n]s",alunos[i].nome);
    printf("digite a primeira nota do aluno %d aluno \n", i+1);
    scanf("%f", &alunos[i].nota1);
    printf("digite a segunda nota do aluno %d aluno \n", i+1);
     scanf("%f", &alunos[i].nota2);
    alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2; 
}

    arq = fopen("lista13.txt", "w");

    for (int i = 0; i < 3; i++)
    {
        fprintf(arq, "aluno :%s \n nota1:%.2f \n nota 2:%f \n media: %.2f \n ", alunos[i].nome, alunos[i].nota1, alunos[i].nota2, alunos[i].media);
    }
   
   fclose(arq);
     arq = fopen("lista13.txt", "r");
    
    while (fscanf(arq, "%s %f %f %f", alunos->nome, alunos->nota1, alunos->nota2 ,alunos->media)!= EOF)
    {
        printf(" aluno: %s \n nota 1: %.2f \n nota2: %.2f \n média: %.2f\n", alunos->nome, alunos->nota1,alunos->nota2, alunos->media);
    }
    fclose(arq);
}