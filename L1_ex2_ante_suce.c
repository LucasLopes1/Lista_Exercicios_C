/* 2�) � dado um n�mero inteiro e voc� deve exibir o n�mero anterior e o posterior a ele.

Entrada A entrada cont�m apenas um caso de teste contendo um n�mero inteiro A .


Sa�da A sa�da consiste de dois n�meros inteiros X e Y separados por um espa�o em branco,
 representando respectivamente o n�mero anterior ao A e o n�mero posterior ao A. Ap�s a impress�o do �ltimo n�mero pule uma linha. */
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
