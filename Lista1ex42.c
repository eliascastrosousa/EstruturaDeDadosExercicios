/*42. Ler um valor de comprimento em polegadas e apresentá-lo convertido em centímetros. A 
fórmula de conversão é: 𝐶 = 𝑃 ∗ 2,54 , sendo 𝐶 o comprimento em centímetros e 𝑃 o
comprimento em polegadas.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[]){
	float pol, cen;

	printf("Digite o comprimento em polegadas: ");
	scanf("%f",&pol);

	cen = pol*2.54;

	printf("%0.2f polegadas Convertido em centimetros e: %0.2f ",pol,cen);
	return 0;
}
