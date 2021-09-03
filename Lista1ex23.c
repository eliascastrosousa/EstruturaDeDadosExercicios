/* 23. Faça um programa para ler um número inteiro, positivo de três dígitos, e gerar outro
número formado pelos dígitos invertidos do número lido. Exemplo:
NúmeroLido = 123
NúmeroGerado = 321. */

#include <string.h>
#include <stdio.h>

char numeroLido[2], numeroGerado[2];

int main(){

	printf("Digite um numero de 3 digitos: ");
	gets(numeroLido);

	for (int i = 0, c=2; i <4 ; ++i){
		numeroGerado[i] = numeroLido[c];
		c--;
	}
	for (int i = 0; i <= 2; ++i){
		printf("%c", numeroGerado[i]);
	}
}
