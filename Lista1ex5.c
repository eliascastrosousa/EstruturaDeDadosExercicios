/*5. Efetue a leitura de tr�s valores e apresente como resultado a soma dos quadrados dos tr�s
valores lidos.*/

#include <stdio.h>
#include <locale.h>

int n1,n2,n3,soma;

main(){
setlocale(LC_ALL, "portuguese");

printf("Digite o 1� Valor: ");
scanf("%d",&n1);
printf("Digite o 2� Valor: ");
scanf("%d",&n2);
printf("Digite o 3� Valor: ");
scanf("%d",&n3);

soma = (n1*n1)+(n2*n2)+(n3*n3);

printf("a soma dos quadrados dos tr�s valores lidos � igual a: %d",soma);

}
