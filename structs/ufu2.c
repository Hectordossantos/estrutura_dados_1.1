/*2. Implemente um programa que leia o nome, a idade e o enderec¸o de uma pessoa e
armazene os dados em uma estrutura.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa
{
    char nome[100];
    int idade;
    char endereco[100]
}Pessoa;

void coleta(Pessoa pessoa){
    printf("digite o nome da pessoa que deseja cadastrar.");
    scanf(" %[^\n]s", pessoa.nome);

      printf("digite a idade da pessoa.");
      scanf("%d", &pessoa.idade);

        printf("digite o endereço da pessoa.");
        scanf(" %[^\n]s", pessoa.endereco);
}

void mostra(Pessoa pessoa){

    printf("o nome da pessoa é %s \n", pessoa.nome);
    printf("a idade da pessoa é: %d \n", pessoa.idade);
    printf("o endereço da pessoa é %s \n", pessoa.endereco);
}

int main(void){

Pessoa pessoa;

coleta(pessoa);
mostra(pessoa);
}