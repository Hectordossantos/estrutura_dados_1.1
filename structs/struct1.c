/*1. Escreva um trecho de codigo para fazer a criac¸ ´ ao dos novos tipos de dados conforme ˜
solicitado abaixo:
• Horario: composto de hora, minutos e segundos. ´
• Data: composto de dia, mes e ano. ˆ
• Compromisso: composto de uma data, horario e texto que descreve o compromisso.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct compromisso
{
    char compromissox[50];
}Compromisso;

typedef struct hora
{
    int horax, minutos, segundos;
    
}Hora;

typedef struct calendario
{
    Compromisso compromisso;
   Hora hora;
}Calendario;

void function(Calendario calendario){

printf("digite o compromisso que vc terá\n");
scanf(" %[^\n]s", calendario.compromisso.compromissox);

printf("digite a hora do compromisso\n");
scanf("%d", &calendario.hora.horax);

printf("digite os minutos\n");
scanf("%d", &calendario.hora.minutos);

printf("digite os segundos \n");
}

void function2(Calendario calendario){
    printf("o compromisso que você irá será %s\n", calendario.compromisso.compromissox);
    printf("a hora que que está marcada é: %d horas, %d minutos, %d segundos", calendario.hora.horax, calendario.hora.minutos, calendario.hora.segundos);

}

int main(void){

Calendario calendario;

function(calendario);
function2(calendario);

}

/*chat gpt :*

#include <stdio.h>
#include <stdlib.h>

typedef struct compromisso {
    char compromissox[50];
} Compromisso;

typedef struct hora {
    int horax, minutos, segundos;
} Hora;

typedef struct calendario {
    Hora hora;
    Compromisso compromisso;
} Calendario;

void function(Calendario *calendario) {
    printf("Digite o compromisso que você terá: ");
    scanf(" %[^\n]s", calendario->compromisso.compromissox);

    printf("Digite a hora do compromisso: ");
    scanf("%d", &(calendario->hora.horax));

    printf("Digite os minutos: ");
    scanf("%d", &(calendario->hora.minutos));

    printf("Digite os segundos: ");
    scanf("%d", &(calendario->hora.segundos));
}

void function2(Calendario calendario) {
    printf("O compromisso que você terá será: %s\n", calendario.compromisso.compromissox);
    printf("A hora marcada é: %02d:%02d:%02d\n", calendario.hora.horax, calendario.hora.minutos, calendario.hora.segundos);
}

int main(void) {
    Calendario calendario;

    function(&calendario);
    function2(calendario);

    return 0;
}
/