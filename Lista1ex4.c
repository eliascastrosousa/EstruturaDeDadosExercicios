/* 4. Leia um número real e imprima a quinta parte deste número. */

#include <stdio.h>
#include <locale.h>

main(){
float n1,qui;

setlocale(LC_ALL, "portuguese");

printf("Digite o numero real: ");
scanf("%f", &n1);

qui = n1/5;

printf("\nO numero %0.2f tem sua quinta parte igual a: %0.2f",n1,qui);
}
