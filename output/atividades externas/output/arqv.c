#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
FILE *fp;
char letra[100];
fp = fopen("delicia.txt","w");
printf("digite o que deseja");
gets(letra);

for (int i = 0; i < strlen(fp); i++)
{
    fputc(letra[i], fp);
    fclose(fp);
}
    
    
}