#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
FILE *arq;
char string[100];
int i;

arq = fopen("lauro.txt", "a+");

printf("digite o que deseja");
gets(string);
for (i = 0; i < strlen(string); i++)

    fputc(string[i], arq);


    fclose(arq);

}