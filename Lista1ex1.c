/* 1. Fa�a um programa que leia um n�mero inteiro e o imprima, ent�o leia um n�mero real e
tamb�m o imprima. */

#include <stdio.h>
#include <locale.h>

main(){
int n;
float n2;

setlocale(LC_ALL, "portuguese");

printf("Digite um numero inteiro: ");
scanf("%d", &n);

printf("\nO numero inteiro Digitado �: %d", n);

printf("\nDigite um numero real: ");
scanf("%f", &n2);

printf("\nO numero real Digitado �: %0.2f\n", n2);
}
