/* 3�) Fa�a um programa que cria um vetor com 5 elementos inteiros,
l� 5 n�meros do teclado, armazena os n�meros no vetor e imprime o vetor na ordem inversa.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
 int v[5];
 int i = 0;

 while(i<5){
 printf("Digite %d o Numero:  ",i+1);
 scanf("%d",&v[i]);
 i++;
 }

 printf(" \n Valores do Vetor: \n ");
 i=0;
 while(i<5){
 printf("%d \n",v[i]);
 i++;
 }

 printf("\n Valores na ordem inversa: \n");
 i = 4;
 while(i>=0){
 printf("%d\n",v[i]);
 i--;
 }
 return 0;
}
