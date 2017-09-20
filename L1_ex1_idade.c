/* 1º) São dados 3 informações:
1. O ano atual.
2. O nome de uma pessoa.
3. O ano de nascimento da pessoa. Mostre quantos anos ela completa no ano atual.

Entrada
 A entrada contém apenas um caso de teste contendo uma linha com um inteiro, representando o ano atual, seguido de um nome (apenas letras sem espaços) e finalmente outro número inteiro representando o ano de nascimento da pessoa. Todos eles são separados por um espaço em branco.

Saída
 A saída consiste de uma linha com a seguinte frase: “NOME, voce completa X anos de idade neste ano.”, onde NOME será substituído pelo nome da pessoa e X pela idade que ela completa no ano atual. Atenção: a palavra “voce” é sem acento e todas as letras são minúsculas e fique atento à vírgula e ao ponto final. E pule uma linha ao final da frase.  */

#include <stdio.h>
#include <stdlib.h>
int main(void) {

	char nome[20];
	int anoAtual;
	int dataNas;
	int idade;

	printf ( "DIGITE SEU NOME: " );
	scanf("%s",nome);

	printf("DIGITE O DIGITE O ANO ATUAL: ");
	scanf("%d",&anoAtual);

	printf("DIGITE O DIGITE O ANO NASCIMENTO: ");
	scanf("%d",&dataNas);

	 idade = anoAtual - dataNas;
	printf("%s ", nome);
	printf(" COMPLETA %d" ,idade);
	printf(" DE IDADE");

    return 0;
}
