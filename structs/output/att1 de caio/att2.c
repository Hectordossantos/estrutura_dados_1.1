/*2. Crie uma estrutura representando os alunos de um determinado curso. A estrutura
deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda
prova e nota da terceira prova.
a) Permita ao usuário entrar com os dados de 5 alunos.
b) Encontre o aluno com maior nota da primeira prova.
c) Encontre o aluno com maior média geral.
d) Encontre o aluno com menor média geral
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor
6 para aprovação. */

#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
    int matricula;
    int idade;
    char nome[100];
    float notas[3];
}Aluno;

void estrutura(Aluno *aluno, int tam){
int i, j, n =3;
for ( i = 0; i < tam; i++)
{
printf("digite o nome da pessoa que deseja cadastrar \n");
scanf(" %[^\n]s", aluno[i]->nome);
fflush(stdin);
printf("digite o a matricula da pessoa que deseja cadastrar \n");
scanf("%d", &aluno[i]->matricula);

printf("digite a idade da pessoa que deseja cadastrar \n");
scanf("%d", &aluno->idade);
    for ( j = 0; j < n; j++)
    {
    printf("digite as 3 notas da pessoa que deseja cadastrar \n");
    scanf("%f", &aluno[i].notas[j]);
    }

    
}



}

void mostraestrutura(Aluno *aluno, int tam){
int i,j, n=3;
    for ( i = 0; i < tam; i++)
    {
    printf("o nome da pessoa é %s \n", aluno[i].nome);
    printf("a matricula da pessoa é %d \n", aluno[i].matricula);
    printf("a idade da pessoa é %d \n", aluno[i].idade);
        for ( j = 0; j < n; j++)
        {
         printf("as notas da pessoa é %2.f \n", aluno[i].notas[j]);
        }
        
    }

}

int main(void){
Aluno *aluno;
int tam = 2;
estrutura(&aluno, tam);
mostraestrutura(&aluno, tam);
}