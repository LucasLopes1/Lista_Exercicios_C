/* 2º) É dado um número inteiro e você deve exibir o número anterior e o posterior a ele.

Entrada A entrada contém apenas um caso de teste contendo um número inteiro A .


Saída A saída consiste de dois números inteiros X e Y separados por um espaço em branco,
 representando respectivamente o número anterior ao A e o número posterior ao A. Após a impressão do último número pule uma linha. */
#include <stdio.h>
#include <stdlib.h>

int main(){

int a;

int ante;
int suce;

printf("Digite um numero: ");

scanf("%d",&a);
ante= a-1;
suce= a+1;

printf("Antecessor: %d ", ante);
printf(", e Sucessor: %d \n", suce);

}
