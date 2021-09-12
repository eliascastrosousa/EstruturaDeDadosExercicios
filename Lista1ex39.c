/*39. Ler uma distância em quilômetros e apresentá-la convertida em milhas. A fórmula de
conversão é: 𝑀 = 𝐾/1,61 , sendo 𝐾 a distância em quilômetros e 𝑀 em milhas.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[]){
	float km,mi;

	printf("Digite a distancia em km/h: ");
	scanf("%f",&mi);

	mi = km/1.61;

	printf("%0.2f Km/h Convertido em milhas e: %0.2f ",km,mi);
	return 0;
}
