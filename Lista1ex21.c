/* 21. Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo
a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo,
sem se preocupar com a altura do usuário. */

#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"portuguese");
float altura,degrau,total;

printf("Digite a altura do degrau da escada: ");
scanf("%f",&degrau);

printf("Qual a altura que o usuário deseja alcançar subindo: ");
scanf("%f",&altura);

total = altura/degrau;

printf("\nDevera ser construido %0.0f degrau(s) para alcançar a altura desejada.\n",total);

}
