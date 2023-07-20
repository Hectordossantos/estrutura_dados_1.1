#include <stdio.h>
#include <stdlib.h>

int* uniao(int *v1, int n1, int *v2, int n2) {
    int n3 = n1 + n2;
    int *v3 = (int*)malloc(n3 * sizeof(int));

    int i;
    for (i = 0; i < n1; i++) {
        v3[i] = v1[i];
    }

    for (i = 0; i < n2; i++) { // Fix the loop condition here
        v3[n1 + i] = v2[i];
    }

    return v3;
}

int main(void) {
    int *v1, *v2, *v3;
    int n1, n2;
    int i;

    printf("Digite a quantidade de elementos que terá o vetor 1:\n");
    scanf("%d", &n1);

    printf("Digite os elementos que terá o 1° vetor:\n");
    v1 = (int*)malloc(n1 * sizeof(int));
    for (i = 0; i < n1; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite a quantidade de elementos que terá o vetor 2:\n");
    scanf("%d", &n2);

    printf("Digite os elementos que terá o 2° vetor:\n");
    v2 = (int*)malloc(n2 * sizeof(int));
    for (i = 0; i < n2; i++) { // Fix the loop condition here
        scanf("%d", &v2[i]);
    }

    v3 = uniao(v1, n1, v2, n2);

    printf("União dos vetores:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", v3[i]);
    }

    // Don't forget to free dynamically allocated memory
    free(v1);
    free(v2);
    free(v3);

    return 0;
}
