/*36. Ler uma velocidade em km/h (quilômetros por hora) e apresentá-la convertida em 𝑚/𝑠
(metros por segundo). A fórmula de conversão é: 𝑀 = 𝑘/3,6, sendo 𝐾 a velocidade em 𝑘𝑚/ℎ
e 𝑀 em m/s.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[]){
	float km,ms;

	printf("Digite a velocidade em km/h (quilometros por hora): ");
	scanf("%f",&km);

	ms = km/3.6;

	printf("%0.2fkm/h Convertido em m/s e: %0.2f \n",km, ms);
	return 0;
}
