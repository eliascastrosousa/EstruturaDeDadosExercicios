/*50. Ler um valor de área em metros quadrados 𝑚2e apresentá-lo convertido em acres. A
fórmula de conversão é: 𝐴 = 𝑀 ∗ 0,000247, sendo 𝑀 a área em metros quadrados e 𝐴 a área 
em acres.
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float ac,m2;

	printf("Digite o valor de área em metros quadrados 𝑚2: ");
	scanf("%f",&m2);

	ac = m2*0.000247;

	printf("%0.2f metros quadrados Convertido em Acres e: %0.2f ",m2,ac);
	return 0;
	
}