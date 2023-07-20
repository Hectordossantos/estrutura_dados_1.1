/*1. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene os dados em uma estrutura. Exiba os dados armazenados ao final*/

#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa
{
    int idade;
    char nome[100];
    char endereco [200];
}Pessoa;

void estrutura(Pessoa *pessoa){

printf("digite o nome da pessoa que deseja cadastrar \n");
scanf(" %[^\n]s", &pessoa->nome);

printf("digite o endereço da pessoa que deseja cadastrar \n");
scanf(" %[^\n]s", &pessoa->endereco);

printf("digite a idade da pessoa que deseja cadastrar \n");
scanf("%d", &pessoa->idade);

}

void mostraestrutura(Pessoa pessoa){

printf("o nome da pessoa é %s\n", pessoa.nome);
printf("o endereço da pessoa é %s\n", pessoa.endereco);
printf("a idade da pessoa é %d \n", pessoa.idade);
}

int main(void){
Pessoa pessoa;

estrutura(&pessoa);
mostraestrutura(pessoa);
}