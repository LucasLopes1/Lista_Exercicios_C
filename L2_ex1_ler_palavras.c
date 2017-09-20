/* 1º) Faça um programa que lê três palavras do teclado e imprime as três palavras na ordem inversa. */

#include <stdio.h>
#include <stdlib.h>
int main(){
 int i = 0;
 char palavras[3][30]; // 3 palavras com até 30 letras;

    while(i<3){
    printf("DIGITE %d",i+1);
    printf( "a PALAVRA: ");
    gets(palavras[i]);
    i++;
    }

    printf("\n ORDEM INVERSA : \n");
    i = 2;
    while(i>=0){
    printf("%s\n",palavras[i]);
    i--;
    }
    return 0;
}
