/* 4�) Preencher um vetor com n�meros inteiros  (8unidades); solicitar um n�mero do teclado. Pesquisar se esse n�mero existe no vetor. Se existir, imprimir em qual posi��o do vetor. Se n�o existir,imprimir MSG que n�o existe.
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
            printf("VALOR N�O ENCONTRADO  ");
        }

        return 0;

    }



