#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordenaAleatorios(int *pale, int tam) {
    printf("Ordem dos números sorteados: \t");
    for (int i = 0; i < tam; i++) {
        pale[i] = rand() % 100 + 1;
        printf("%d\t", pale[i]);
    }
    printf("\n");

    printf("Nova ordem crescente: \t");
    for (int i = 0; i < tam; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (pale[i] > pale[j]) {
                int aux = pale[i];
                pale[i] = pale[j];
                pale[j] = aux;
            }
        }
        printf("%d\t", pale[i]);
    }
    printf("\n");
}

void ordenaApostados(int *pnum, int *pale, int tam) {
    printf("Digite seis números que você apostou aqui:\n");
    for (int i = 0; i < tam; i++) {
        scanf("%d", &pnum[i]);
    }

    printf("Números apostados em ordem: \t");
    for (int i = 0; i < tam; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (pnum[i] > pnum[j]) {
                int aux = pnum[i];
                pnum[i] = pnum[j];
                pnum[j] = aux;
            }
        }
        printf("%d\t", pnum[i]);
    }
    printf("\n");

    int acertos = 0;
    for (int i = 0; i < tam; i++) {
        if (pnum[i] == pale[i]) {
            acertos++;
        }
    }

    printf("Os números que você acertou foram: %d\n", acertos);
    if (acertos > 0) {
        int *numerosCorretos = (int *)malloc(acertos * sizeof(int));
        if (numerosCorretos == NULL) {
            printf("Falha na alocação de memória para os números corretos.\n");
            exit(1);
        }

        int index = 0;
        for (int i = 0; i < tam; i++) {
            if (pnum[i] == pale[i]) {
                numerosCorretos[index] = pnum[i];
                index++;
            }
        }

        printf("Números corretos: ");
        for (int i = 0; i < acertos; i++) {
            printf("%d\t", numerosCorretos[i]);
        }
        printf("\n");

        free(numerosCorretos);
    }
}

int main(void) {
    srand(time(NULL));
    int tam = 6;
    int *pale = (int *)malloc(tam * sizeof(int));
    int *pnum = (int *)malloc(tam * sizeof(int));
  
    ordenaAleatorios(pale, tam);
    ordenaApostados(pnum, pale, tam);

    free(pale);
    free(pnum);

    return 0;
}
