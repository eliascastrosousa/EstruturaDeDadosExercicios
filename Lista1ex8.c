/* 8. Leia um número inteiro e imprima o seu antecessor e o seu sucessor. */

#include <stdio.h>
#include <locale.h>

main(){
int n1;
setlocale(LC_ALL, "portuguese");

printf("Digite o numero: ");
scanf("%d", &n1);

printf("\nO numero %d tem seu antecessor: %d e seu sucessor: %d!",n1,n1-1,n1+1);

}
