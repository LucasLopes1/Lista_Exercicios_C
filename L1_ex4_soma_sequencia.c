/* 4º) Faça um programa que receba uma sequência de N números inteiros e realize a soma desses N valores.


Entrada A entrada contém um inteiro N, 0 < N ≤ 10000. Nas N linhas seguintes haverá um número inteiro em cada. Saída

A saída consiste de um número inteiro representando a soma dos N valores recebidos na entrada. Apos a impressão do número pule uma linha. */
#include <stdio.h>
#include <stdlib.h>

int main(void){

int cont;
int num, soma = 0;


printf(" QUANTOS NUMEROS VC DESEJA SOMAR : ");
scanf("%d",&cont);

    while(cont>0){
        printf("n: ");
        scanf("%d",&num);

        soma= soma +num;
        cont--;


    }
    printf( "Total da soma %d", soma);

return 0;
}
