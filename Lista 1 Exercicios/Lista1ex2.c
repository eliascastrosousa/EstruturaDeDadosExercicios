/* 2. Peça ao usuário para digitar três valores inteiros e imprima a soma deles. */

#include <stdio.h>
#include <locale.h>

main(){
int n1,n2,n3,soma=0;

setlocale(LC_ALL, "portuguese");


printf("Digite o primeiro numero: ");
scanf("%d", &n1);

printf("Digite o segundo numero: ");
scanf("%d", &n2);

printf("Digite o terceiro numero: ");
scanf("%d", &n3);

soma = n1+n2+n3;

printf("A soma dos 3 numeros é: %d", soma);

}
