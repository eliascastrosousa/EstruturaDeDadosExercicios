/*27. Implemente um programa em C que calcule o ano de nascimento de uma pessoa a partir
de sua idade e do ano atual.*/

#include <stdio.h>

int main(){
	int nasc, ano, idade;
	printf("Digite em que ano estamos: ");
	scanf("%d",&ano);

	printf("Digite a sua idade: ");
	scanf("%d",&idade);

	nasc = ano-idade;

	printf("Voce nasceu no ano de: %d \n");

	return 0;
}
