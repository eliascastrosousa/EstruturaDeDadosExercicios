/*45. Ler um valor de volume em litros e apresentá-lo convertido em metros cúbicos 𝑚³. A
fórmula de conversão é: 𝑀 = 𝐿/1000 , sendo 𝐿 o volume em litros e 𝑀 o volume em metros
cúbicos.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]){
	float mc, l;

	printf("Digite o volume em Litros: ");
	scanf("%f",&mc);

	mc = l/1000;

	printf("%0.2f volume em Litros Convertido em Metros cubicos e: %0.2f ",mc,l);
	return 0;
	
}
