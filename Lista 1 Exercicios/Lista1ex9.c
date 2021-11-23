
/* 9. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.*/

#include <stdio.h>
#include <locale.h>

int n1,dobro,triplo,soma;

main(){

setlocale(LC_ALL,"portuguese");

printf("Digite um numero: ");
scanf("%d",&n1);

triplo = (n1*3)+1;
dobro = (n1*2)-1;
soma = triplo+dobro;

printf("a soma do sucessor de seu triplo (%d) com o antecessor de seu dobro (%d) é igual a: %d.",triplo, dobro,soma);

}
