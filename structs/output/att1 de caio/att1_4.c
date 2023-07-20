/*4. Faça um programa para armazenar um livro de receitas e:
- Crie um vetor de 5 receitas, que deve ter nome (máximo 25 letras), quantidade de
ingredientes e ingredientes.
- Para cada receita, leia seu nome e a quantidade de ingredientes. Então crie e leia o
vetor de ingredientes, sendo que cada ingrediente contem nome e quantidade.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ingredientes
{
   char ingredientesv[50];
}Ingredientes;


typedef struct receitas
{
 char nome[25];
 int q_ingredientes;
Ingredientes ingredientes[25];
}Receitas[2];


int main(void){
Receitas receita;
int i, j;
int tam = 2;

        for (i = 0; i < tam; i++)
    {
        printf("digite o nome da receita que deseja cadastrar \n");
        scanf(" %[^\n]s", receita[i].nome);
    fflush(stdin);
        printf("digite a quantidade de ingredientes que deseja utilizar \n");
        scanf("%d", &receita[i].q_ingredientes);

            for (j = 0; j < receita[i].q_ingredientes; j++)
            {
                printf("digite os ingredientes \n");
                scanf(" %[^\n]s", receita[i].ingredientes[j].ingredientesv);
                fflush(stdin);
            }   
        
        
    }

     for (i = 0; i < tam; i++)
    {
        printf("o nome da  %d° receita é %s \n",i+1, receita[i].nome);

        printf("a quantidade de ingredientes da %d° receita é %d \n",i+1, receita[i].q_ingredientes);
            for ( j = 0; j < receita[i].q_ingredientes; j++)
            {
            printf("os ingredientes da %d° receita é %s \n", i+1, receita[i].ingredientes[j].ingredientesv);
            }
        

    }
}