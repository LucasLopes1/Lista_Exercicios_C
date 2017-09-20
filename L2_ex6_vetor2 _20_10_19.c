/* 6º) Preencher um vetor com os números pares do número 2 a 20. Preencher um vetor com os números de 10 a 19. Somar os vetores acima.

 */
#include <stdio.h>
#include <stdlib.h>

int main(){

int vet2a20[9];
int i=0;
int cont10 = 10;
int valor = 2;
int x[9];
int vet10a19[9];

while(i<=9){
    if( valor%2 == 0){
        vet2a20[i]= valor;

    } i++; valor = valor +2;
}

i=0;
printf("OS VALORES DO PRIMEIRO VETOR SAO: ");
while(i<=9){
    printf("\n %d", vet2a20[i]);
     i++;
}

while(cont10<=19){
    vet10a19[cont10] = cont10; cont10++;
    }

cont10 = 10;
printf("\n OS VALORES DO SEGUNDO VETOR SAO: ");

while(cont10<=19){
    printf("\n %d", vet10a19[cont10]);
     cont10++;

}
printf("\n A SOMA DOS VETORES: \n");
i=0;
while(i<=9){
   x[i] = vet10a19[i] + vet2a20[i];
   printf("\n %d", x[i] ); i++;
}
return 0;
}
