/* 5�) Fa�a um programa que receba uma sequ�ncia indefinida de n�meros inteiros e realize a soma desses valores. Entrada

A entrada cont�m uma quantidade indefinida de n�meros inteiros, sendo um em cada linha. A entrada termina com EOF. Sa�da

A sa�da consiste de um n�mero inteiro representando a soma de todos os valores recebidos na entrada. Ap�s a impress�o do n�mero pule uma linha. */
#include <stdio.h>
#include <stdlib.h>

int main(void){

int num, soma = 0;

printf(" DIGITE OS NUMEROS A SEREM SOMADOS ( Digite 0 para encerrar a inser��o de valores): ");

        while(num != 0){
            printf("n: ");
            scanf("%d",&num);

            soma= soma +num;
            }

            printf( "Total da soma %d", soma);
return 0;
}
