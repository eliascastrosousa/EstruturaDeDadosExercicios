/*43. Ler um valor de comprimento em centímetros e apresentá-lo convertido em polegadas. A 
fórmula de conversão é: 𝑃 = 𝐶/2,54 , sendo 𝐶 o comprimento em centímetros e 𝑃 o
comprimento em polegadas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[]){
	float pol, cen;

	printf("Digite o comprimento em centimetros: ");
	scanf("%f",&cen);

	pol = cen/2.54;

	printf("%0.2f centimetros Convertido em polegadas e: %0.2f ",cen,pol);

	return 0;
}
