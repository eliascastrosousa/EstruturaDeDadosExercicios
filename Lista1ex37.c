/*37. Ler uma velocidade em 𝑚/𝑠 (metros por segundo) e apresentá-la convertida em
𝐾𝑚/ℎ (quilômetros por hora). A fórmula de conversão é: 𝐾 = 𝑀 ∗ 3,6 , sendo 𝐾 a velocidade
em 𝑘𝑚/ℎ e 𝑀 em 𝑚/𝑠.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[]){
	float km,ms;

	printf("Digite a velocidade em m/s (metros por segundo): ");
	scanf("%f",&ms);

	km = ms*3.6;

	printf("%0.2fkm/h Convertido em km/h e: %0.2f ",ms, km);
	return 0;
}
