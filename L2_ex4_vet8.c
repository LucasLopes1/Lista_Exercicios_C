/* 4º) Preencher um vetor com números inteiros  (8unidades); solicitar um número do teclado. Pesquisar se esse número existe no vetor. Se existir, imprimir em qual posição do vetor. Se não existir,imprimir MSG que não existe.
 */
#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 0;
    int vet[7];
    int consulta ;
    int controle = 0;

    while(i<8){
    printf("Digite um Numero:  ");
    scanf("%d",&vet[i]);
    i++;
 }

    printf("DIGITEO NUMERO QUE DESEJA PESQUISAR NO VETOR: ");
    scanf("%d",&consulta);

    i = 0;
    while (i <=7){
        if(consulta == vet[i]){
            printf("O VALOR DESEJADO ESTA NA POSICAO %d DO VETOR ", i);
            controle = 1;
        }
        i++;

        }
        if (controle ==0){
            printf("VALOR NÃO ENCONTRADO  ");
        }

        return 0;

    }



