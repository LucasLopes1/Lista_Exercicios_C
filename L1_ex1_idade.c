/* 1�) S�o dados 3 informa��es:
1. O ano atual.
2. O nome de uma pessoa.
3. O ano de nascimento da pessoa. Mostre quantos anos ela completa no ano atual.

Entrada
 A entrada cont�m apenas um caso de teste contendo uma linha com um inteiro, representando o ano atual, seguido de um nome (apenas letras sem espa�os) e finalmente outro n�mero inteiro representando o ano de nascimento da pessoa. Todos eles s�o separados por um espa�o em branco.

Sa�da
 A sa�da consiste de uma linha com a seguinte frase: �NOME, voce completa X anos de idade neste ano.�, onde NOME ser� substitu�do pelo nome da pessoa e X pela idade que ela completa no ano atual. Aten��o: a palavra �voce� � sem acento e todas as letras s�o min�sculas e fique atento � v�rgula e ao ponto final. E pule uma linha ao final da frase.  */

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
