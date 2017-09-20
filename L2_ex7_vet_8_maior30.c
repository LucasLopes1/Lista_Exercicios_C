/* 7º) Preencher um vetor de 8 elementos inteiros. Mostrar o vetor e informar quantos números são maior que 30,
Somar estes números. Somar todos os números.*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    int vet[7], i, cont30 = 0, soma = 0, soma2 = 0;

    for(i=0;i<7;i++){
        printf("DIGITE UM VALOR: \n");
        scanf("%d",&vet[i]);
        if(vet[i]>30){
            cont30++;
            soma = soma+vet[i];
        }
    }

    for(i=0;i<7;i++){
        printf("\n %d",vet[i]);
    }

    printf("\n NUMEROS MAIORES QUE 30: %d", cont30);
    printf("\n A SOMA DOS NUMEROS MAIORES QUE 30 = %d",soma);

    for(i=0;i<7;i++){
        soma2=soma2+vet[i];
    }
    printf("\n A SOMA DOS NUMEROS DIGITADOS = %d \n", soma2);

return 0;
}
