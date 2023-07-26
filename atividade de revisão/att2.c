#include <stdio.h>
#include <stdlib.h>
typedef struct endereco{
char rua[100];
char bairro[100];
char cidade[30];
int cep;
}Endereco;

typedef struct pessoa{
char nome[50];
float salario;
int cpf;
int tel;
Endereco endereco;
}Pessoa[5];

int main (void){
Pessoa pessoa;
int i;

for ( i = 0; i < 2; i++)
{
    printf("digite o nome da pessoa: \n");
    scanf(" %[^\n]s", &pessoa[i].nome);

    printf("digite o salario da pessoa: \n");
    scanf("%f", &pessoa[i].salario);

    printf("digite o cpf da pessoa: \n");
    scanf("%d", &pessoa[i].cpf);

    printf("digite o telefone da pessoa: \n");
    scanf("%d", &pessoa[i].tel);

    printf("digite a rua que a pessoa mora: \n");
    scanf(" %[^\n]s", &pessoa[i].endereco.rua);

    printf("digite o bairro da pessoa: \n");
    scanf(" %[^\n]s", &pessoa[i].endereco.bairro);

    printf("digite a cidade da pessoa: \n");
    scanf(" %[^\n]s", &pessoa[i].endereco.cidade);

    printf("digite o cep da cidade da pessoa: \n");
    scanf("%d", &pessoa[i].endereco.cep);

}

for ( i = 0; i < 2; i++)
{
        printf(" o nome da pessoa é %s: \n", pessoa[i].nome);
        printf(" o salario da pessoa é %2.f: \n", pessoa[i].salario);
        printf(" o cpf da pessoa %d: \n", pessoa[i].cpf);
        printf(" o telefone da pessoa é :%d \n", pessoa[i].tel);
        printf(" o nome da rua pessoa é :%s \n", pessoa[i].endereco.rua);
        printf(" o nome do bairro é: %s \n", pessoa[i].endereco.bairro);
        printf(" o nome da cidade é: %s \n", pessoa[i].endereco.cidade);
        printf(" o cep da cidade é: %d \n", pessoa[i].endereco.cep);
        printf("\n");

}


}