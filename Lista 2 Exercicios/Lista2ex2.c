/*2 – Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto
superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido por
uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa que declare e
leia uma estrutura Retângulo e exiba a área e o comprimento da diagonal e o perímetro
desse retângulo. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct ponto {
	float x;
	float y;
} Ponto;

typedef struct retangulo {
	 Ponto pontoSup; //chamada da sutruct ponto (x, y) superior
	 Ponto pontoInf;
} Retangulo;

int main() {
	float a, b;
	float area, perimetro, diagonal;
	Retangulo retan;
    printf("\t== Lado Superior ==\n\n");
	printf("Digite a Coordenada x: ");
	scanf("%f", &retan.pontoSup.x);
	printf("Digite a Coordenada y: ");
	scanf("%f", &retan.pontoSup.y);
    printf("\n\t== Lado Inferior ==\n\n");
	printf("Digite a Coordenada x: ");
	scanf("%f", &retan.pontoInf.x);
	printf("Digite a Coordenada y: ");
	scanf("%f", &retan.pontoInf.y);

	a = retan.pontoInf.x - retan.pontoSup.x;
	b = retan.pontoSup.y - retan.pontoInf.y;

	area = a * b;
	perimetro = 2 * (a + b);
	diagonal = sqrt(pow(a, 2) + pow(b, 2));

    printf("\n----------------------------------------\n\n");
    printf("\n\t== Resultado ==\n\n");
	printf("Area: %.2f\n", area);
	printf("Perimetro: %.2f\n", perimetro);
	printf("Diagonal: %.2f\n\n", diagonal);

	return 0;
}
