#include <stdio.h>
#include <stdlib.h>

int main (void){
int vet[3];
int *p;
int i;
p = vet;

for ( i = 0; i < 3; i++)
{
    scanf("%d", p);
    p++;
}

p = vet;

for (i = 0; i < 3; i++)
{
    
   printf(" valores: %d\n", *p);
   p++;
}

p= vet;

for( i = 0; i < 3; i++)
{

    
            printf("dobro do valor: %d \n", *p *2);
    
    p++;
}

}