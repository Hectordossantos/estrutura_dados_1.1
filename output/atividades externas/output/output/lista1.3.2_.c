#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    char nome[60];
    float nota1;
    float nota2;
    float media;
} Aluno;

int main() {
    Aluno alunos[10];
    int i;
    int tam = 5;

    for (i = 0; i < tam; i++) {
        printf("Digite o nome do aluno %d: \n", i + 1);
        scanf(" %[^\n]s", alunos[i].nome);
        printf("Digite a 1° nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);
        printf("Digite a 2° nota do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);

        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2) / 2;
    }

    FILE *arq;
    arq = fopen("lista13.txt", "w");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    for (i = 0; i < tam; i++) {
        fprintf(arq, "Nome do %d° aluno: %s\n", i + 1, alunos[i].nome);
        fprintf(arq, "Nota 1 do %d° aluno: %.2f\n", i + 1, alunos[i].nota1);
        fprintf(arq, "Nota 2 do %d° aluno: %.2f\n", i + 1, alunos[i].nota2);
        fprintf(arq, "Média do %d° aluno: %.2f\n", i + 1, alunos[i].media);
    }

    fclose(arq);

    // Abrindo o arquivo para leitura
    arq = fopen("lista13.txt", "r");

    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char linha[100];

    printf("Dados dos alunos:\n");

    while (fgets(linha, sizeof(linha), arq) != NULL) {
        printf("%s", linha);
    }

    fclose(arq);

    return 0;
}
