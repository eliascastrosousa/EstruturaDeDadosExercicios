/* 5. Efetue a leitura de tr�s valores e apresente como resultado a soma dos quadrados dos tr�s valores lidos */

#include <stdio.h>
#include <locale.h>

main(){
float n1,quad;

setlocale(LC_ALL, "portuguese");

printf("Digite o numero real: ");
scanf("%f", &n1);

quad = n1*n1;

printf("\nO numero %0.2f ao quadrado �: %0.2f",n1,quad);
}
