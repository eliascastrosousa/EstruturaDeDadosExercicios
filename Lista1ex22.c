/* 22. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela ASCII. */

#include <string.h>
#include <stdio.h>

char letra;

int main()
{
	printf("Digite uma Letra: ");
	scanf("%c", &letra);

	printf("A letra em Maiuscula fica: %c", toupper(letra));
	return 0;
}