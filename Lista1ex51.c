/*51. Ler um valor de área em acres e apresentá-lo convertido em metros quadrados 𝑚². A
fórmula de conversão é: 𝑀 = 𝐴 ∗ 4048,58 , sendo 𝑀 a área em metros quadrados e 𝐴 a área 
em acres.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float ac,m2;

	printf("Digite o valor de área em acres: ");
	scanf("%f",&ac);

	m2 = ac*4048.58;

	printf("%0.2f Acres Convertido em metros e: %0.2f ",ac,m2);
	return 0;
	
}