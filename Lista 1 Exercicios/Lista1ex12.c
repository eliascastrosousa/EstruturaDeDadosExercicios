
/* . Sejam 𝑎 e 𝑏 os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎 = √𝑎
2 + 𝑏
2. Faça um programa que receba os valores de 𝑎 e 𝑏 e encontre o
valor da hipotenusa através da equação. Imprima no final o resultado dessa operação. */

#include <stdio.h>
#include <locale.h>
#include <math.h>

float cata,catb,hip;

main(){

setlocale(LC_ALL,"portuguese");

printf("Digite o valor do cateto A: ");
scanf("%f",&cata);
printf("Digite o valor do cateto B: ");
scanf("%f",&catb);

hip = (cata*cata)+(catb*catb);
hip = sqrt(hip);

printf("o valor da hipotenusa é igual a: %0.2f",hip);

}
