/* 5º) Faça um programa que receba uma sequência indefinida de números inteiros e realize a soma desses valores. Entrada

A entrada contém uma quantidade indefinida de números inteiros, sendo um em cada linha. A entrada termina com EOF. Saída

A saída consiste de um número inteiro representando a soma de todos os valores recebidos na entrada. Após a impressão do número pule uma linha. */
#include <stdio.h>
#include <stdlib.h>

int main(void){

int num, soma = 0;

printf(" DIGITE OS NUMEROS A SEREM SOMADOS ( Digite 0 para encerrar a inserção de valores): ");

        while(num != 0){
            printf("n: ");
            scanf("%d",&num);

            soma= soma +num;
            }

            printf( "Total da soma %d", soma);
return 0;
}
