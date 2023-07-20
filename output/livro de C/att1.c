/*1) Escreva um programa que mostre o tamanho em byte que cada tipo de dados
ocupa na memória: char, int, float, double.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

int tam;
float tam2;
char tam3;
double tam4;

printf("tamanho do %d \n", sizeof(tam));
printf("tamanho do %d \n", sizeof(tam2));
printf("tamanho do %d \n", sizeof(tam3));
printf("tamanho do %d \n", sizeof(tam4));
}