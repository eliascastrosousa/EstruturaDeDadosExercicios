/*52. Ler um valor de área em metros quadrados 𝑚² e apresentá-lo convertido em hectares. A 
fórmula de conversão é: 𝐻 = 𝑀 ∗ 0,0001, sendo 𝑀 a área em metros quadrados e 𝐻 a área 
em hectares.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float ac,m2;

	printf("Digite a área em metros quadrados: ");
	scanf("%f",&m2);

	hec = m2*0.0001 ;

	printf("%0.2f metros quadrados Convertido em hectares e: %0.2f ",m2,hec);
	return 0;
	
}