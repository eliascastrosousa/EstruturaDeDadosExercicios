/*35. Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Kelvin. A
fórmula de conversão é: 𝐾 = 𝐶 + 273,15, sendo 𝐶 a temperatura em Celsius e 𝐾
atemperatura em Kelvin*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[]){
	float cel,kel;

	printf("Digite a Temperatura em Graus Celsius: ");
	scanf("%f",&cel);

	kel = cel+273.15;

	printf("%0.2fC Convertido em Graus Kelvin e: %0.2f ",cel,kel);
	return 0;
}


