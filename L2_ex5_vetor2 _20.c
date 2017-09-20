/* 5º) Preencher um vetor com os números pares do número 2 a 20. */
#include <stdio.h>
#include <stdlib.h>

int main(){

int vet[9];
int i=0;
int valor = 2;


while(i<9){
    if( valor%2 == 0){
        vet[i]= valor;

    } i++; valor = valor +2;
}

i=0;
printf("OS VALORES DO VETOR SAO: ");
while(i<=9){
    printf("\n %d", vet[i]);
     i++;
}
}
