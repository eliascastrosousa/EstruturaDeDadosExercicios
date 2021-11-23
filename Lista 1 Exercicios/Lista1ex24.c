/*24. Leia um número inteiro de 4 dígitos e imprima 1 dígito por linha. */

#include <string.h>
#include <stdio.h>

char numeroLido[4];

int main(){

	printf("Digite um numero de [4] digitos: ");
	gets(numeroLido);

	for (int i = 0; i < 4; ++i)
	{
		printf("%c\n", numeroLido[i]);
	}
}
