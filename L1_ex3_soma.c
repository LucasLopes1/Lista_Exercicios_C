
/* 3�) S�o dados dois inteiros A e B.
Calcule A+B.
Entrada A entrada cont�m apenas um caso de teste contendo dois n�meros inteiros A e B, separados por um espa�o em branco.
 Sa�da A sa�da consiste de um n�mero inteiro representando a soma dos dois valores recebidos na entrada, ou seja, a soma de A com B. Ap�s a impress�o do n�mero pule uma linha.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

int a, b, c;

printf("DIGITE DOIS VALORES: ");
scanf("%d",&a);
scanf("%d",&b);

c = a + b;
printf(" A SOMA DOS VALORES � IGUAL A: %d",c);

return 0;
}
