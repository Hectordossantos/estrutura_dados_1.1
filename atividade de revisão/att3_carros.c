#include <stdio.h>
#include <stdlib.h>

typedef struct vendedor{
char nome[70];
int cpf;
}Vendedor;

typedef struct carros{
char m_carros[50];
float preco;

}Carros[3];

int main(void){
Carros carros;
Vendedor vendedor;
int i;
int maior =0;

printf("digite o nome do vendedor \n");
scanf(" %[^\n]s", &vendedor.nome);

printf("digite o cpf do vendedor \n");
scanf("%d", &vendedor.cpf);

    for ( i = 0; i < 3; i++)
    {
printf("digite o nome do %d° carro e em seguida seu preço: \n", i+1);

        scanf(" %[^\n]s", &carros[i].m_carros);
        scanf("%f", &carros[i].preco);

    }   
        
    for ( i = 0; i < 3; i++)
    {
        if (carros[i].preco > maior)
        {
            maior = carros[i].preco;
        }
        
    }

    for ( i = 0; i < 3; i++)
    {
        printf("os modelos dos carros são: %s \n", carros[i].m_carros);

        printf("o preço do carro é: %f \n", carros[i].preco);

    }

  
        printf("o vendedor é: %s \n",vendedor.nome);
        printf("o cpf do vendedor é %d \n", vendedor.cpf);

}