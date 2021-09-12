/*41. Ler um ângulo em radianos e apresentá-lo convertido em graus. A fórmula de conversão é: 
𝐺 = 𝑅 ∗ 180/𝜋 , sendo 𝐺 o ângulo em graus e 𝑅 em radianos e 𝜋 = 3,141592*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[]){
	float gra, rad;

	printf("Digite o angulo em Radianos: ");
	scanf("%f",&rad);

	gra = rad*180/3.14;

	printf("%0.2f Radiano Convertido em Graus e: %0.2f ",rad,gra);
	return 0;
}
