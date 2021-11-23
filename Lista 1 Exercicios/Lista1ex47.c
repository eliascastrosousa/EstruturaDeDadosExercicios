/*47. Ler um valor de massa em libras e apresentá-lo convertido em quilogramas. A fórmula de 
conversão é: 𝐾 = 𝐿 ∗ 0,45 , sendo 𝐾 a massa em quilogramas e 𝐿 a massa em libras.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float k,l;

	printf("Digite o valor de massa em libras: ");
	scanf("%f",&l);

	k = l*0.45;

	printf("%0.2f libras Convertido em quilogramas e: %0.2f ",l,k);
	return 0;
	
}