/*34. Ler uma temperatura em graus Kelvin e apresentá-la convertida em graus Celsius. A
fórmula de conversão é: 𝐶 = 𝐾 − 273,15, sendo 𝐶 a temperatura em Celsius e 𝐾 a
temperatura em Kelvin.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[]){
	float cel,kel;

	printf("Digite a Temperatura em Graus Kelvin: ");
	scanf("%f",&kel);

	cel = kel-273.15;

	printf("%0.2fk Convertido em Graus Celsius e: %0.2f ",kel, cel);
	return 0;
}
