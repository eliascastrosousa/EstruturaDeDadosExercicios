/*38. Ler uma distância em milhas e apresentá-la convertida em quilômetros. A fórmula de
conversão é: 𝐾 = 1,61 ∗ 𝑀 , sendo 𝐾 a distância em quilômetros e 𝑀 em milhas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[]){
	float km,mi;

	printf("Digite a distancia em milhas: ");
	scanf("%f",&mi);

	km = 1.61*mi;

	printf("%0.2f Milhas Convertido em km/h e: %0.2f ",mi, km);
	return 0;
}
