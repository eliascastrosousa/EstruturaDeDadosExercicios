#include <stdio.h>

main(){

int x=10;
int *ap_x, *y;
ap_x = &x;

printf("%d\n",*ap_x );
printf("%d\n",x );

y = &x; // aqui � atribuido o endere�o de X para Y

printf("Digite um novo numero: ");
scanf("%d",y); // aqui ele escaneia e salva em y, que logo apos ira passar para o endere�o de x o valor

printf("\n%d\n",x );
}
