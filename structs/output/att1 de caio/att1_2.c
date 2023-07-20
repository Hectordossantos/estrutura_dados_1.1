/*2. Crie uma estrutura representando os alunos de um determinado curso. A estrutura
deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda
prova e nota da terceira prova.
a) Permita ao usuário entrar com os dados de 5 alunos.
b) Encontre o aluno com maior nota da primeira prova.
c) Encontre o aluno com maior média geral.
d) Encontre o aluno com menor média geral
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor
6 para aprovação. */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct aluno
{
int matricula;
int idade;
char nome[75];
float notas[3];
float media;
}Aluno[3];



int main(void)
{
 Aluno alunos;
    int i;
    int tam = 3;

    for (i = 0; i < tam; i++){ 
    
    printf("digite o nome do aluno do %d° aluno \n", i+1);
    scanf(" %[^\n]s", alunos[i].nome);
    fflush(stdin);

    printf("digite a matricula do %d° aluno \n", i+1);
    scanf("%d", &alunos[i].matricula);

    printf("digite a idade do %d° aluno \n", i+1);
    scanf("%d", &alunos[i].idade);
    
        for (int j = 0; j < 3; j++)
        {
            printf("digite a %d° nota do aluno", j+1);
            scanf("%f", &alunos[i].notas[j]);
        }
     printf("\n");
        
    }    
    
    for (i = 0; i < tam; i++){
        
    alunos[i].media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2]) /3;
    }

    float maior = 0, menor = 200;
    char alunomaiorm[70], alunomenorm[70];

    for ( i = 0; i < tam; i++)
    {
        if (alunos[i].notas[0] > maior)
        {
            maior = alunos[i].notas[0];
             strcpy(alunomaiorm , alunos[i].nome);
        }

        if (alunos[i].notas[0] < menor)
        {
            menor = alunos[i].notas[0];
               strcpy(alunomenorm , alunos[i].nome);
        }
        
    }
    
float maiormedia = 0, menormedia = 200;
char alunomaiormedia[70], alunomenormedia[70];

    for ( i = 0; i < tam; i++)
    {
        if (alunos[i].media > maiormedia)
        {
            maiormedia = alunos[i].media;
           strcpy(alunomaiormedia, alunos[i].nome);
        }

        if (alunos[i].media < menormedia)
        {
            menormedia = alunos[i].media;
               strcpy(alunomenormedia , alunos[i].nome);
        }
        
    }

        

    for ( i = 0; i < tam; i++)
    {
    printf("o nome do %i aluno é %s \n", i+1, alunos[i].nome);
    printf("a matricula do %i aluno é %i \n", i+1, alunos[i].matricula);
    printf("a idade do %i aluno é %i\n", i+1, alunos[i].idade);
     printf("\n");
    
        for (int j = 0; j < 3; j++)
        {
        printf("a nota da %i° prova do aluno é %2.f \n", j+1, alunos[i].notas[j]);
        
        }
    printf("a média do %i° aluno é %2.f \n", i+1, alunos[i].media);
     printf("\n");   
    
        
     
    }

    printf("o aluno com a maior primeira nota foi de %s com %2.f \n", alunomaiorm, maior);
     printf("\n");
    printf("o aluno com a menor primeira nota foi de %s com %2.f \n", alunomenorm, menor);
     printf("\n");
    printf("o aluno com a maior média foi %s com %2.f \n", alunomaiormedia, maiormedia);
     printf("\n");
    printf("o aluno com a menor média  foi %s com %2.f \n", alunomenormedia, menormedia);
     printf("\n");

        for ( i = 0; i < tam; i++)
        {
            if (alunos[i].media > 5.9)
            {
                printf("o aluno %s foi aprovado com média %3.f\n", alunos[i].nome, alunos[i].media);
                 printf("\n");
            }
            else{
                   printf("o aluno %s foi reprovado com média %3.f\n", alunos[i].nome, alunos[i].media);
                    printf("\n");
            }            
        }
    
    return 0;

}