#include <stdio.h>
#include <locale.h>
#define TAM 5

main(){
setlocale(LC_ALL,"portuguese");
char v[TAM];

printf("Digite seu nome: ");
scanf("%s", &v[TAM]);

printf("\nSeu nome é %s", v[TAM]);



}
