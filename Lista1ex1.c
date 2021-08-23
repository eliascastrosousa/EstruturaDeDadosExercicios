/* 1. Faça um programa que leia um número inteiro e o imprima, então leia um número real e
também o imprima. */

#include <stdio.h>
#include <locale.h>

main(){
int n;
float n2;

setlocale(LC_ALL, "portuguese");

printf("Digite um numero inteiro: ");
scanf("%d", &n);

printf("\nO numero inteiro Digitado é: %d", n);

printf("\nDigite um numero real: ");
scanf("%f", &n2);

printf("\nO numero real Digitado é: %0.2f\n", n2);
}
