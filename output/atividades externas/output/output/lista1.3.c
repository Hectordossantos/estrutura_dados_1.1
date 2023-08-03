/*Faça um programa que leia (do teclado) um cadastro de 10 alunos, indicando o
nome, nota1, nota2. Calcule a média aritmética simples dos 10 alunos e depois
escreva em um arquivo texto os dados de cada aluno: nome, nota1, nota2 e média.
Lembre-se de que as notas e média deverão ser apresentadas como valores que
possuem até 2 casas após a vírgula.*/

typedef struct alunos
{
    char nomes[60];
    float nota1;
    float nota2;
    float media;
}Alunos[10];

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
Alunos alunos;
int i;
int tam = 2;
for ( i = 0; i < tam; i++)
{
printf("digite o nome do aluno \n");
scanf(" %[^\n]s", alunos[i].nomes);
printf("digite a  1° nota");
scanf("%f", &alunos[i].nota1);
printf("digite a  2° nota");
scanf("%f", &alunos[i].nota2);

alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2;
}

 FILE *arq;
 arq = fopen("lista13.txt", "w");

for ( i = 0; i < tam; i++)
{
fprintf(arq, "nome do aluno %d° aluno: %s\n",i + 1, alunos[i].nomes);
fprintf(arq, "nota1 do aluno %d° aluno: %.2f\n",i + 1, alunos[i].nota1 );
fprintf(arq, "nota 2 do aluno %d° aluno: %.2f\n",i + 1, alunos[i]. nota2);
fprintf(arq, "média do aluno %d° aluno: %.2f\n",i+1, alunos[i].media);
    
}
fclose(arq);

arq = fopen("ista13.txt", "r");
for ( i = 0; i < tam; i++)
{
while (fscanf(arq, "%s %f %f% f", alunos[i].nomes, alunos[i].nota1, alunos[i].nota2, alunos[i].media)!= EOF)
{
fprintf(arq,"nome do %d° aluno : %s \n", i+1, alunos[i].nomes);
fprintf(arq,"nota 1 do %d° aluno : %f\n", i+1, alunos[i].nota1);
fprintf(arq,"nota2 do %d° aluno : %f \n", i+1, alunos[i].nota2);
fprintf(arq,"média do %d° aluno : %f \n", i+1, alunos[i].media);

}

}


 
}