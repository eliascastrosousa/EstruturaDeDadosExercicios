/*25. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.
*/


#include <string.h>
#include <stdio.h>

float numeroLido;
float horas, minutos, segundos ;

int main(){
	printf("Digite uma Quantidade de Segundos: ");
	scanf("%f", &numeroLido);

	minutos = numeroLido/60;
	horas = minutos/60;

	printf("%0.0f Minutos\n",minutos);
	printf("%0.0f Horas\n", horas);
	printf("%0.0f Segundos\n",numeroLido);




}
