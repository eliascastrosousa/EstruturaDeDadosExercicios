/*46. Ler um valor de massa em quilogramas e apresentá-lo convertido em libras. A fórmula de 
conversão é: 𝐿 = 𝐾/0,45 , sendo 𝐾 a massa em quilogramas e 𝐿 a massa em libras.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float k,l;

	printf("Digite o valor de massa em quilogramas: ");
	scanf("%f",&k);

	l = k/0.45;

	printf("%0.2f quilogramas Convertido em libras e: %0.2f ",k,l);
	return 0;
	
}
