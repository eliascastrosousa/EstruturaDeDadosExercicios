/*44. Ler um valor de volume em metros cúbicos 𝑚³ e apresentá-lo convertido em litros. A
fórmula de conversão é: 𝐿 = 1000 ∗ 𝑀, sendo 𝐿 o volume em litros e 𝑀 o volume em metros 
cúbicos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[]){
	float mc, l;

	printf("Digite o valor de volume em metros cubicos: ");
	scanf("%f",&mc);

	l = 1000*mc;

	printf("%0.2f volume em metros cubicos Convertido em Litros e: %0.2f ",mc,l);
	return 0;

}
