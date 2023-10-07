#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){

    FILE *a, *b, *c;
    char nomes[50];
    char nomes2[50];
    a = fopen("a.txt", "w");
    b = fopen("b.txt", "w");
    c = fopen("c.txt", "w");

printf("arquivo 1:");
    scanf("%s", nomes);

printf("arquivo 2:");
    scanf("%s", nomes2);

    fprintf(a, "%s", nomes);

    fprintf(b, "%s", nomes2);

    fclose(a);
    fclose(b);

a = fopen("a.txt", "r");
b = fopen("b.txt", "r");

   while (fscanf(a, "%s", nomes)!= EOF)
   {
fprintf(c,"%s", nomes);
    
   }
   while (fscanf(b, "%s", nomes2)!= EOF)
   {
fprintf(c,"%s", nomes2);
    
   }
   
fclose(a);
fclose(b);
fclose(c);


}