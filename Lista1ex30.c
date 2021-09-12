/*30. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que
lê quanto cada apostador investiu, lê o valor do prêmio, e escreve quanto cada um ganharia.*/

#include <stdio.h>
#include <stdlib.h>
#define tam 3

int main(){

	float invest[tam],total, premio, porcent;

	for (int i = 0; i < tam; ++i){
	printf("Digite quanto o Apostador [%d] investiu: ", i+1);
	scanf("%f",&invest[i]);
	}

	printf("Digite o valor total do premio: ");
	scanf("%f",&premio);

	total = invest[0]+invest[1]+invest[2];

	for (int i = 0; i < tam; ++i){
		porcent = (invest[i]/total)*100;
		printf("\nPorcentagem de ganho do primeiro apostador: %0.2f%%",porcent);
		printf(", Valor pago sera de: %0.2f",total*(porcent/10));

	}

}
