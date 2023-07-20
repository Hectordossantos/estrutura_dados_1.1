/*2) Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
Escreva um programa que mostre o tamanho em byte dessa estrutura.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct att2
{
char aluno[50];
float notas[3];
int matricula;

}Att2;

int main(void){

Att2 att;

 printf("digite o nome do aluno");
 scanf(" %[^\n]s", att.aluno);
 printf("digite a matricula do aluno");
 scanf("%d", &att.matricula);

 for (int i = 0; i < 3; i++)
 {
 printf("digite as notas do aluno");
 scanf("%f", &att.notas[i]);
 }
 

printf("o tamanho da estrutura é %d", sizeof(Att2));
}