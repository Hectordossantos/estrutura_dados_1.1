/*3) Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade
e o endereço de uma pessoa. Agora, escreva uma função que receba um inteiro 
Alocação dinâmica 239
positivo N e retorne o ponteiro para um vetor de tamanho N, alocado dinamicamente, dessa estrutura. Solicite também que o usuário digite os dados desse vetor
dentro da função.*/
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro
{
    char nome[100];
    int idade;
    char endereco[200];
}Cadastro;

int main(void){

Cadastro *cadastro;
int n;
    printf("digite quantos cadastros deseja fazer \n");
    scanf("%d", &n);

cadastro = (Cadastro *) malloc(n *  sizeof(Cadastro));
if (cadastro = NULL)
{
    printf("erro na alocação");
    exit(1);
}

for (int i = 0; i < n; i++)
{
    printf("digite o nome do aluno");
    scanf(" %[^\n]s", cadastro[i].nome);

    printf("digite a idade do aluno");
    scanf("%d", &cadastro[i].idade);

    printf("digite o endereço do aluno");
    scanf(" %[^\n]s", cadastro[i].endereco);

}

for (int i = 0; i < n; i++)
{
    printf("o nome do primeiro aluno é %s, seu endereço %d sua idade %s \n", cadastro->nome, cadastro->endereco, cadastro->idade);

}


};*/

#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro
{
    char nome[100];
    int idade;
    char endereco[200];
} Cadastro;

Cadastro* criarVetorCadastro(int n)
{
    Cadastro* cadastro = (Cadastro*)malloc(n * sizeof(Cadastro));
    if (cadastro == NULL)
    {
        printf("Erro na alocação de memória.\n");
        exit(1);
    }
    return cadastro;
}

int main(void)
{
    Cadastro* cadastros;
    int n;

    printf("Digite quantos cadastros deseja fazer: ");
    scanf("%d", &n);

    cadastros = criarVetorCadastro(n);

    for (int i = 0; i < n; i++)
    {
        printf("Digite o nome do aluno: ");
        scanf(" %[^\n]s", cadastros[i].nome);

        printf("Digite a idade do aluno: ");
        scanf("%d", &cadastros[i].idade);

        printf("Digite o endereço do aluno: ");
        scanf(" %[^\n]s", cadastros[i].endereco);
    }

    for (int i = 0; i < n; i++)
    {
        printf("O nome do aluno %d é %s, seu endereço é %s e sua idade é %d.\n", i+1, cadastros[i].nome, cadastros[i].endereco, cadastros[i].idade);
    }

    free(cadastros);

    return 0;
}
