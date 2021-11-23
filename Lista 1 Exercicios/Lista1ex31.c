/*31. Faça um programa para ler as dimensões de um terreno (comprimento 𝑐 e largura 𝑙), bem
como o preço do metro do arame 𝑝, então fornecer como saída o custo para cercar este
mesmo terreno.*/

#include <stdio.h>
#include <stdlib.h>
#define tam 3

int main(){

	float comp,larg,preco,metragem;

	printf("Digite as dimensoes de LARGURA do terreno: ");
	scanf("%f",&larg);

	printf("Digite as dimensoes de COMPRIMENTO do terreno: ");
	scanf("%f",&comp);

	printf("Digite o Preco do arame: ");
	scanf("%f",&preco);

	metragem = (larg+comp)*2;
	printf("\n\nPara cercar o Terreno de %0.1fm2 \nira precisar de %0.1fm de Arame, \ne ira gastar: R$%0.2f \n",larg*comp,metragem,metragem*preco);




}
