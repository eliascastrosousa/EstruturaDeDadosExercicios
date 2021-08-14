#include <stdio.h>

main(){

int a, b;

printf("Digite o Valor de A e B: " );
scanf("%d %d", &a, &b);

b = (a>12) ? 100:200;

printf("\nValor Atualizado de B: %d",b );


}
