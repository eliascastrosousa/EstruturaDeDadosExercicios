/*32. Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A
fórmula de conversão é: 𝐹 = 𝐶 ∗ (9,0 5,0) + 32,0, sendo 𝐹 a temperatura em Fahrenheit e 𝐶 a 
temperatura em Celsius.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]){
	float cel,far;

	printf("Digite a Temperatura em Graus Celsius: ");
	scanf("%f",&cel);

	far = cel*1.8+32;

	printf("%0.2fc Convertido em Graus Fahrenheit e: %0.2f ",cel, far);
	return 0;
}
