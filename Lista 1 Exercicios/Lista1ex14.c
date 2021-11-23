/* 14. Faça um programa que possa entrar com o valor de um produto e imprima o valor tendo
em vista que o desconto foi de 12% */

#include <stdio.h>
#include <locale.h>

float val,desc;

main(){
setlocale(LC_ALL,"portuguese");

printf("Digite o valor $$ do produto: ");
scanf("%f",&val);

desc = val*12/100;
desc = val-desc;

printf("o valor R$%0.2f com desconto de 12%% é igual a: R$%0.2f",val,desc);

}
