/* 21. Receba a altura do degrau de uma escada e a altura que o usu�rio deseja alcan�ar subindo
a escada. Calcule e mostre quantos degraus o usu�rio dever� subir para atingir seu objetivo,
sem se preocupar com a altura do usu�rio. */

#include <stdio.h>
#include <locale.h>

main(){
setlocale(LC_ALL,"portuguese");
float altura,degrau,total;

printf("Digite a altura do degrau da escada: ");
scanf("%f",&degrau);

printf("Qual a altura que o usu�rio deseja alcan�ar subindo: ");
scanf("%f",&altura);

total = altura/degrau;

printf("\nDevera ser construido %0.0f degrau(s) para alcan�ar a altura desejada.\n",total);

}
