/*48. Ler um valor de comprimento em jardas e apresentá-lo convertido em metros. A fórmula
de conversão é: 𝑀 = 0,91 ∗ 𝐽 , sendo 𝐽 o comprimento em jardas e 𝑀 o comprimento em 
metros.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float j,m;

	printf("Digite o valor de comprimento em jardas: ");
	scanf("%f",&j);

	m = 0.91*j;

	printf("%0.2f jardas Convertido em metros e: %0.2f ",j,m);
	return 0;
	
}