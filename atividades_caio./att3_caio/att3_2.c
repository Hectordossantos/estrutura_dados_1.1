#include <stdio.h>

void preencherArray(int* array, int tam, int valor) {
    int* ptr = array; 
    while (ptr < array + tam) {
        *ptr = valor;
        ptr++;
    }
}

int main(void){
    int valor, tam = 5; 
    int array[tam]; 
    printf("digite um valor: ");
    scanf("%d", &valor);

    preencherArray(array, tam, valor);

    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}