/* 2�)  Fa�a um programa que l� duas palavras do teclado e diz se elas s�o iguais ou diferentes.
O programa deve dizer ainda se alguma das palavras digitadas � igual a �papagaio�. */
#include <stdio.h>
#include <stdlib.h>
int main(){
 char p1[30],p2[30];
 //captura palavras
 printf("Informe palavra 1: ");
 gets(p1);
 printf("Informe palavra 2: ");
 gets(p2);
 //verifica se sao iguais
 if(strcmp(p1,p2)==0)
 printf("\nPalavras sao iguais.");
 if(strcmp(p1,"papagaio")==0)
 printf("\nPalavra 1 igual papagaio.");
 if(strcmp(p2,"papagaio")==0)
 printf("\nPalavra 2 igual papagaio.");
 return 0;
}
