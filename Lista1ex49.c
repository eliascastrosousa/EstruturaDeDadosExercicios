/*49. Ler um valor de comprimento em metros e apresentá-lo convertido em jardas. A fórmula
de conversão é: 𝐽 = 𝑀/0,91 , sendo 𝐽 o comprimento em jardas e 𝑀 o comprimento em
metros.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float j,m;

	printf("Digite o valor de comprimento em metros: ");
	scanf("%f",&m);

	j = m/0.91;

	printf("%0.2f metros Convertido em Jardas e: %0.2f ",m,j);
	return 0;
	
}