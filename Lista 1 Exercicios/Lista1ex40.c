/*40. Ler um ângulo em graus e apresentá-lo convertido em radianos. A fórmula de conversão é: 
𝑅 = 𝐺 ∗ 𝜋/180 , sendo 𝐺 o ângulo em graus e R em radianos e 𝜋 = 3,141592.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[]){
	float ang, rad;

	printf("Digite o angulo em graus: ");
	scanf("%f",&ang);

	rad = ang*3.14/180;

	printf("%0.2f graus Convertido em Radiano e: %0.2f ",ang,rad);
	return 0;
}
