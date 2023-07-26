/*4. Criar uma estrutura que represente um aluno, contendo nome, media e faltas. Faça um
programa que leia informações de n alunos em um vetor alocado dinamicamente. Em
seguida, imprima as informações lidas na ordem decrescente das medias dos alunos.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct aluno
{
    char nome[50];
    float media;
    int faltas;
}Aluno;

void recebendodados(Aluno *alunos, int quantidade){
int i;
    
    for ( i = 0; i < quantidade; i++)
    {

    printf("digite o nome %d do aluno\n", i+1);
    scanf(" %[^\n]s", &alunos[i].nome);
    printf("digite a faltas %d do aluno\n", i+1);
    scanf("%d", &alunos[i].faltas);
    printf("digite a media %d do aluno\n", i+1);
    scanf("%f", &alunos[i].media);
    printf("\n");
    }

}

void mostrandodados(Aluno *alunos, int quantidade){
 int i,j;
    for ( i = 0; i < quantidade; i++)
    {
        for ( j = i+1; j < quantidade; j++)
        {
 Aluno aux;
            if (alunos[i].media < alunos[j].media)
            {
                
            aux = alunos[i];
            alunos[i] = alunos[j];
            alunos[j] = aux;

            }
            
        }
        
    }
    printf("os alunos em ordem de média decreste é: \n");
    for ( i = 0; i < quantidade; i++)
    {
            printf(" o nome do %d aluno é %s \n", i+1 ,alunos[i].nome);
            printf(" as faltas do %d aluno é %d \n",i+1, alunos[i].faltas);
            printf(" a media do %d aluno é %f \n", i+1, alunos[i].media);
            printf("\n");
    }
    

}    

int main(void){
Aluno *alunos;
int quantidade;
int i;
printf("digite a quantidade de alunos que vc deseja cadastrar\n");
scanf("%d", &quantidade);

alunos =(Aluno*) malloc(quantidade * sizeof(Aluno));

    
    recebendodados(alunos, quantidade);
    mostrandodados(alunos, quantidade);
   

free(alunos);
}