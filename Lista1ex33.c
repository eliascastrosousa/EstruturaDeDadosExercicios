/*33. Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius. A
fórmula de conversão é: 𝐶 = 5,0 ∗ (𝐹 − 32,0)/9,0, sendo 𝐶 a temperatura em Celsius e 𝐹 a
temperatura em Fahrenheit.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[]){
	float cel,far;

	printf("Digite a Temperatura em Graus Fahrenheit: ");
	scanf("%f",&far);

	cel = 5*(far-32)/9;

	printf("%0.2ff Convertido em Graus Celsius e: %0.2f ",far, cel);
	return 0;
}
