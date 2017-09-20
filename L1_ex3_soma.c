
/* 3º) São dados dois inteiros A e B.
Calcule A+B.
Entrada A entrada contém apenas um caso de teste contendo dois números inteiros A e B, separados por um espaço em branco.
 Saída A saída consiste de um número inteiro representando a soma dos dois valores recebidos na entrada, ou seja, a soma de A com B. Após a impressão do número pule uma linha.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void){

int a, b, c;

printf("DIGITE DOIS VALORES: ");
scanf("%d",&a);
scanf("%d",&b);

c = a + b;
printf(" A SOMA DOS VALORES É IGUAL A: %d",c);

return 0;
}
