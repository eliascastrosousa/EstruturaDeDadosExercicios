/*53. Ler um valor de área em hectares e apresentá-lo convertido em metros quadrados 𝑚². A 
fórmula de conversão é: 𝑀 = 𝐻 ∗ 10000 , sendo 𝑀 aárea em metros quadrados e 𝐻 a área em 
hectares*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float ac,m2;

	printf("Digite a área em hectares: ");
	scanf("%f",&hec);

	m2 = hec*1000;

	printf("%0.2f hectares Convertido em Metros Quadrados e: %0.2f ",hec,m2);
	return 0;
	
}