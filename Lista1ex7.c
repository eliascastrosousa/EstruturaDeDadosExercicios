/* 7. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em
dólares */

#include <stdio.h>
#include <locale.h>

main(){
float n1,n2,dolar;

setlocale(LC_ALL, "portuguese");

printf("Digite o numero real: ");
scanf("%f", &n1);
printf("Digite a cotação do dolar: ");
scanf("%f", &n2);
dolar = n1/n2;

printf("\nR$%0.2f convertido em dolar fica: $%0.2f",n1,dolar);
}
