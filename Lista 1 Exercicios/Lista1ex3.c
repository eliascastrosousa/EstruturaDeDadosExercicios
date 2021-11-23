/* 3. Efetue a leitura de um número real e imprima o resultado do quadrado desse número. */

#include <stdio.h>
#include <locale.h>

main(){
float n1,quad;

setlocale(LC_ALL, "portuguese");

printf("Digite o numero real: ");
scanf("%f", &n1);

quad = n1*n1;

printf("\nO numero %0.2f ao quadrado é: %0.2f",n1,quad);

}
