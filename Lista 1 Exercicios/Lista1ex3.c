/* 3. Efetue a leitura de um n�mero real e imprima o resultado do quadrado desse n�mero. */

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
